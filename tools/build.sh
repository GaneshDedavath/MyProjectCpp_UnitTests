#!/bin/bash

# Default: enable tests
BUILD_TESTS=ON

# Validate arguments
if [ $# -lt 2 ] || [ "$1" != "--appname" ]; then
    echo "Invalid argument format!"
    echo "Usage: $0 --appname <App_Name> [--Gtest-ON | -Gtest-OFF]"
    echo "available options : "
    echo "bash $0 --appname MyApplication --Gtest-ON"
    echo "bash $0 --appname MyApplication --Gtest-OFF"
    exit 1
fi

# Required app name
APP_NAME="$2"
echo "Selected application: $APP_NAME"

# Optional test flag
if [ $# -ge 3 ]; then
    if [ "$3" == "--Gtest-OFF" ]; then
        BUILD_TESTS=OFF
    elif [ "$3" == "--Gtest-ON" ]; then
        BUILD_TESTS=ON
    else
        echo "Unknown third argument: $3"
        echo "Allowed: --Gtest-OFF or --Gtest-ON"
        exit 1
    fi
fi

# Define directories
BUILD_DIR="build"
INSTALL_DIR="install"
PROJECT_DIR=".."
APP_DIR="../My_apps/${APP_NAME}"


# Clean old build and create a new one
cd "$PROJECT_DIR"
rm -rf "$BUILD_DIR"
mkdir "$BUILD_DIR"
cd "$BUILD_DIR"

# Run CMake configuration
cmake "$APP_DIR" \
  -G "MinGW Makefiles" \
  -DCMAKE_INSTALL_PREFIX="../$INSTALL_DIR" \
  -DCMAKE_TOOLCHAIN_FILE="$TOOLCHAIN_FILE" \
  -DCMAKE_BUILD_TYPE=Debug \
  -DCMAKE_VERBOSE_MAKEFILE:BOOL=OFF \
  -DBUILD_TESTS=${BUILD_TESTS}

# Build
cmake --build .

# Install
cmake --install .

echo "✅ Build and installation complete for ${APP_NAME}!"
