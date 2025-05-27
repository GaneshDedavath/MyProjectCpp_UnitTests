# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Set compilers (only if needed for your custom setup)
set(CMAKE_C_COMPILER "C:/msys64/ucrt64/bin/gcc.exe")
set(CMAKE_CXX_COMPILER "C:/msys64/ucrt64/bin/g++.exe")

project(MyGame)

add_subdirectory(Impl)
add_subdirectory(App)
