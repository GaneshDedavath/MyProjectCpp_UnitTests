#Clone GoogleTest
git clone https://github.com/google/googletest.git gtest

#Go to the googletest directory
cd gtest

#:: Create and enter the MinGW build directory
mkdir build-mingw
cd build-mingw

#:: Generate MinGW Makefiles with Debug build type
cmake .. -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Debug -DCMAKE_INSTALL_PREFIX=../../../../install/gtest_manual

#:: Build using MinGW
mingw32-make

#:: Install the built files
mingw32-make install
