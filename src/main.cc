#include <map>
#include <iostream>
#include <algorithm>
#include <string>
#include <stdexcept>

int main(void)
{
    std::multimap<int, int> queue;

    std::string line;

    while (std::getline(std::cin, line)) {
        if (line == "exit") {
            break;
        } else if (line == "get") {
            if (auto it = queue.cbegin(); it != queue.cend()) {
                std::cout << it->second;
            }
            std::cout << '\n';
        } else if (line == "print") {
            std::for_each(queue.cbegin(), queue.cend(), [](const auto &entry) {
                std::cout << entry.second << ' ';
            });
            std::cout << '\n';
        } else if (line == "remove") {
            if (auto it = queue.begin(); it != queue.end()) {
                queue.erase(it);
            }
        } else {
            const auto index = line.find(':');
            if (index != line.npos) {
                const auto value = line.substr(0, index);
                const auto priority = line.substr(index+1);

                try {
                    queue.insert({
                        std::stoi(priority),
                        std::stoi(value)
                    });
                } catch (...) {
                }
            }
        }
    }

    return 0;
}
