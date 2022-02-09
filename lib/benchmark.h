//
// Created by Mads Smed on 09/02/2022.
//

#ifndef SP2022_BENCHMARK_H
#define SP2022_BENCHMARK_H

#include <vector>
#include <utility>
#include <string>
#include <chrono>
#include <iostream>

using namespace std;
using namespace std::chrono;

class Benchmark {
private:
    std::vector<double> measures;
    std::vector<high_resolution_clock::time_point> time_points;
    void (*function_to_benchmark)();
public:
    string name;
    explicit Benchmark(string name, void (*function_to_benchmark)()) {
        this->name = std::move(name);
        this->function_to_benchmark = function_to_benchmark;
    }

    void run_benchmark(int times) {
        for(int i = 0; i <= times; i++) {
            auto start = high_resolution_clock::now();
            this->function_to_benchmark();
            auto end = high_resolution_clock::now();
            measures.push_back(duration<double, std::milli>(end-start).count());
            time_points.push_back(end);
        }
    }

    void print_result() {
        double result = 0;
        for(auto i : this->measures) {
            result += i;
        }

        result = result / this->measures.size();

        std::cout << "avg. run was " << result << " ms.";
    }
};

#endif //SP2022_BENCHMARK_H
