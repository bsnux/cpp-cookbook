# C++ Cookbook

Simple cookbook for C++.

## How to build the binary

First of all, these are the requirements:

* CMake
* C++ compiler (using *clang* on MacOS for testing)

Then, you can run the following commands:

```
cmake .
make
```

You'll find a new binary living in the `bin/` folder.

If you want to get the binary plus the compiled libs, you can run the
following command:

```
make install
```

Then, you'll find the following directories:

* **bin**: Binary
* **lib**: Libray object
* **include**: Library header file
