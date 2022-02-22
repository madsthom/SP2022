//
// Created by mads on 2/18/22.
//

#include <vector>
#include <random>
#include <iostream>
#include "number_series.hpp"


number_series::number_series(std::vector<int> input_numbers) {
    numbers = std::move(input_numbers);
}

void number_series::append(int number) {
    numbers.push_back(number);
    max_value = number > max_value ? number : max_value;
    min_value = number < min_value ? number : min_value;
}

size_t number_series::size() const {
    return numbers.size();
}

number_series number_series::make_random(int length) {
    number_series ns;
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(1,RAND_MAX);
    for(int i = 0; i < length; i++) {
        ns.append(distribution(generator));
    }

    return ns;
}

void number_series::print() {
    for(auto i : numbers) {
        std::cout << i << std::endl;
    }
}

number_series operator+(number_series const& ns1, number_series const& ns2) {
    number_series ns;
    auto ns1_size = ns1.size();
    auto ns2_size = ns2.size();

    if (ns1_size >= ns2_size) {
        for(int i = 0; i < ns1_size; i++) {
            if (i < ns2_size) {
                ns.append(ns1.numbers[i] + ns2.numbers[i]);
            } else {
                ns.append(ns1.numbers[i]);
            }
        }
    } else {
        for(int i = 0; i < ns2_size; i++) {
            if (i < ns1_size) {
                ns.append(ns1.numbers[i] + ns2.numbers[i]);
            } else {
                ns.append(ns2.numbers[i]);
            }
        }
    }

    return ns;
}


