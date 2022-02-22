//
// Created by mads on 2/22/22.arr_size
//

#include <vector>
#include <memory>
#include <chrono>
#include <iostream>
#include "Base.h"
#include "Derived.h"

using namespace std;
using namespace std::chrono;

const int AMOUNT = 10000000;
vector<unique_ptr<Base>> vec(AMOUNT);
vector<Derived> vec_derived(AMOUNT);

int main() {
    for(auto &v : vec) {
        v = make_unique<Derived>();
    }
    auto start = high_resolution_clock::now();

    for(auto const &v : vec) {
        v->increment();
    }

    auto stop = high_resolution_clock::now();

    auto dur = duration<double, std::milli>(stop - start);

    std::cout << "increment: " << dur.count() <<  " ms" << std::endl;

    start = high_resolution_clock::now();

    for(auto const &v : vec) {
        v->decrement();
    }

    stop = high_resolution_clock::now();

    dur = duration<double, std::milli>(stop - start);

    std::cout << "decrement: " << dur.count() <<  " ms" << std::endl;

    start = high_resolution_clock::now();

    for(auto &v : vec_derived) {
        v.increment();
    }

    stop = high_resolution_clock::now();

    dur = duration<double, std::milli>(stop - start);

    std::cout << "increment derived: " << dur.count() <<  " ms" << std::endl;

    start = high_resolution_clock::now();

    for(auto v : vec_derived) {
        v.decrement();
    }

    stop = high_resolution_clock::now();

    dur = duration<double, std::milli>(stop - start);

    std::cout << "decrement derived: " << dur.count() <<  " ms" << std::endl;

    return 0;
}
