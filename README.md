# cmake_gtest_gmock_example

Test project based on https://crascit.com/2015/07/25/cmake-gtest/

This project demonstrates how to use CMake ExternalProject to download external
dependencies at configure time allowing the targets of the external project
to be added via ADD_SUBDIRECTORY.

This means that the dependencies do not need to have been installed prior to building this project.

# Project directory structure
.
├── CMakeLists.txt
├── CMakeLists.txt.in
├── include
│   ├── bar.h
│   └── foo.h
├── README.md
├── src
└── test
    ├── CMakeLists.txt
    ├── example.cpp
    └── mock_foo.h



