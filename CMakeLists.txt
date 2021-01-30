cmake_minimum_required(VERSION 3.16.0)

project(cpp-buffer)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(buffer src/main.cc)
target_compile_options(buffer PRIVATE -Wall -Wextra)
target_link_libraries(buffer)

