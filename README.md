A simple buffer reading exercise

Build
=====

```sh
$ mkdir build
$ cd build
$ cmake ..
$ make
```

Run
===

```sh
$ ./buffer
```

It accepts the following commands:

* exit - quit the program
* `value`:`priority` - where `value` and `priority` are integers. Insert
the value in the queue according to its priority. The queue is a min
queue: the lowest the priority number the higher the priority.
* print - print the queue
* get - get the first element in the queue
