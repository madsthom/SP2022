//
// Created by mads on 2/9/22.
//

#include <vector>
#include <utility>
#include <string>
#include <chrono>

using namespace std;
using namespace std::chrono;

class Benchmark {
private:
    string name;
    std::vector<float> measures;
    std::vector<high_resolution_clock> time_points;
public:
    explicit Benchmark(string name) {
        name = name;
    }

};
