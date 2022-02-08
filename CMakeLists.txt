cmake_minimum_required(VERSION 3.21)
project(SP2022)

set(CMAKE_CXX_STANDARD 20)

add_executable(SP2022 main.cpp lec1/lec1.cpp lec1/lec1.h lec2/max_functions.cpp lec2/lec2_tests.cpp)
add_executable(Lec1Tests lec1/lec1_tests.cpp lec1/lec1.cpp lec1/lec1.h lib/doctest.h)
add_executable(Lec2Tests lec2/lec2_tests.cpp lec2/max_functions.cpp lec2/max_functions.h lib/doctest.h)
