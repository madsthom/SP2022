#include "lec1/lec1.h"
#include <iostream>
#include <chrono>
using namespace std::chrono;

constexpr int arr_size = 10'000;

vector<int> vec(arr_size);
int c_arr[arr_size];

int main() {
    for (int i = 0; i < arr_size; i++) {
        c_arr[i] = i;
    }

    auto t0 = high_resolution_clock::now();
    swap_ends(c_arr, arr_size);
    auto t1 = high_resolution_clock::now();
    std::cout << "c-array: " << duration<double, std::milli>(t1-t0).count() << "ms\n";

    t0 = high_resolution_clock::now();
    swap_ends(vec);
    t1 = high_resolution_clock::now();
    std::cout << "vector: " << duration<double, std::milli>(t1-t0).count() << "ms\n";

    t0 = high_resolution_clock::now();
    swap_ends_static_buf(c_arr, arr_size);
    t1 = high_resolution_clock::now();
    std::cout << "c-array static with memcpy: " << duration<double, std::milli>(t1-t0).count() << "ms\n";

    t0 = high_resolution_clock::now();
    swap_ends_dyn_buf(c_arr, arr_size);
    t1 = high_resolution_clock::now();
    std::cout << "c-array dyn with memcpy: " << duration<double, std::milli>(t1-t0).count() << "ms\n";
}
