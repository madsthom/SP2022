cmake_minimum_required(VERSION 3.21)
project(SP2022)

set(CMAKE_CXX_STANDARD 20)

add_executable(SP2022 main.cpp lec1/lec1.cpp lec1/lec1.h lib/doctest.h lec1/testing.cpp)
