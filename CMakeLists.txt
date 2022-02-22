cmake_minimum_required(VERSION 3.21)
project(SP2022)

set(CMAKE_CXX_STANDARD 20)

add_compile_options(-fsanitize=address)
add_link_options(-fsanitize=address)

add_executable(SP2022 main.cpp lib/benchmark.cpp lib/benchmark.h lec1/lec1.h lec1/lec1.cpp)
add_executable(Lec1Tests lec1/lec1_tests.cpp lec1/lec1.cpp lec1/lec1.h lib/doctest.h lec4/main.cpp)
add_executable(Lec2Tests lec2/lec2_tests.cpp lec2/max_functions.cpp lec2/max_functions.h lib/doctest.h)
add_executable(WordleSolver lec4/main.cpp)
add_executable(Assignment1 assignment-1/main.cpp assignment-1/number_series.hpp assignment-1/number_series.cpp)
add_executable(test assignment-1/number_series.hpp assignment-1/number_series.cpp assignment-1/number_series_tests.cpp lib/doctest.h)
add_executable(Poly lec5/Base.cpp lec5/Base.h lec5/Derived.cpp lec5/Derived.h lec5/main.cpp)