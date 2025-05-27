# My_CppRepo
This is for my basic Cpp programming


## install Gtest for unit testing
Download the official GoogleTest source code if you haven’t already:

1. install V isual studio community version with C++ build tools
2. git clone https://github.com/google/googletest.git gtest
    This will put the full source (including CMakeLists.txt) in:

3. Build with MinGW:
    cd /gtest

    mkdir build-mingw && cd build-mingw
    cmake .. -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Debug
    mingw32-make

4. You are good to go


Then link the resulting static .a files in your main project.

MyProject_CppExamples/
├── CMakeLists.txt       <-- PUT THE add_subdirectory() HERE
├── tools/
│   └── gtest/
├── My_apps/
│   └── MyApplication/
│       ├── CMakeLists.txt
│       └── unit-test/
│           ├── sum_test.cpp
│           └── CMakeLists.txt
🛠️ Top-level CMakeLists.txt (MyProject_CppExamples/CMakeLists.txt)

Write Down your testCases
build and run the executable
