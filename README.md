# 🛠️ Project Build System with GoogleTest and MinGW

This project uses custom build scripts to configure and build applications with optional unit test support using **GoogleTest** and **MinGW**. The build process is powered by **CMake** and supports easy toggling of test builds.

---

## 📁 Project Structure

my_project/
├── My_apps/
│ └── MyApplication/ # Your application source
├── install/ # Optional install output
├── lib/
│ └── gtest/ # Pre-existing GoogleTest library (fallback)
├── build/ # Temporary build directory (auto-generated)
├── tools/
│ ├── build.sh # Main project build script
│ └── googletest/
│ ├── gtest_setup.sh # GoogleTest build/install script (optional)
├── CMakeLists.txt


## ⚙️ GoogleTest Setup (Optional)

If you prefer to use an updated version of GoogleTest or want to build it yourself using MinGW, run:

```bash
bash tools/googletest/gtest_setup.sh
This will:

Clone and build GoogleTest using MinGW

Install it to: install/gtest_manual/

Otherwise, the existing lib/gtest/ will be used as the default.

## 🔧 Building an Application
Use the custom script to build your application with or without test support.


bash tools/build.sh --appname <App_Name> [--Gtest-ON | --Gtest-OFF]

bash tools/build.sh --appname MyApplication --Gtest-ON
bash tools/build.sh --appname MyApplication --Gtest-OFF
Default: --Gtest-ON (unit tests are included).

Optional: --Gtest-OFF to skip building tests.

## 🔍 GoogleTest Path Selection in CMake
The build system checks for an installed version of GTest first, and falls back to the bundled version if not found:

set(GTEST_MANUAL_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../../../install/gtest_manual")
set(GTEST_FALLBACK_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../../../lib/gtest")

if(EXISTS "${GTEST_MANUAL_PATH}")
    set(GTEST_LIB_DIR "${GTEST_MANUAL_PATH}")
else()
    set(GTEST_LIB_DIR "${GTEST_FALLBACK_PATH}")
endif()
This ensures compatibility whether you've installed GTest or are using the provided version in lib/gtest/.

## 🧪 Linking GoogleTest in CMake
In your application's CMakeLists.txt, use:


include_directories(${GTEST_LIB_DIR}/include)
link_directories(${GTEST_LIB_DIR}/lib)

add_executable(my_tests test_main.cpp)


## 📝 Requirements
CMake with MinGW generator support

MinGW toolchain (ensure mingw32-make is in your PATH)

No need to set up GoogleTest manually if lib/gtest/ is present

## ✅ Summary
Script	Purpose
tools/build.sh	Builds your application with optional tests
tools/googletest/gtest_setup.sh	(Optional) Rebuilds and installs GTest via MinGW

You are ready to build your apps with or without test support using just one command.
