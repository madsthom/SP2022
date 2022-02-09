#include "lec1/lec1.h"
#include "lib/benchmark.h"
#include <iostream>
#include <chrono>
using namespace std::chrono;

constexpr int arr_size = 10'000'000;

vector<int> vec(arr_size);
int c_arr[arr_size];

void test() {
    swap_ends(c_arr, arr_size);
}

int main() {
    Benchmark benchmark("torben", test);
    std::cout << benchmark.name << std::endl;
    benchmark.run_benchmark(5);
    benchmark.print_result();
}
