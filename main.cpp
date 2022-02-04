#include "lec1/lec1.h"
#include <iostream>
#include <chrono>
using namespace std::chrono;

constexpr int arr_size = 10'000'000;

vector<int> vec(arr_size);
int c_arr[arr_size];

int main() {
    auto t0 = high_resolution_clock::now();
    swap_ends(c_arr, arr_size);
    auto t1 = high_resolution_clock::now();
    std::cout << "c-array: " << duration<double, std::milli>(t1-t0).count() << "ms\n";

    t0 = high_resolution_clock::now();
    swap_ends(vec);
    t1 = high_resolution_clock::now();
    std::cout << "vector: " << duration<double, std::milli>(t1-t0).count() << "ms\n";
}