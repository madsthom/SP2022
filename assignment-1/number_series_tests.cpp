//
// Created by mads on 2/18/22.
//

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../lib/doctest.h"
#include "number_series.hpp"

TEST_SUITE("numbers") {
    TEST_CASE("number series has vector on ints") {
        number_series ns;
        CHECK(ns.size() == 0);
    }

    TEST_CASE("number series vector of ints as input") {
        number_series ns(std::vector<int>{42});
        CHECK(ns.size() == 1);
    }

    TEST_CASE("number series can add number to series") {
        number_series ns;
        ns.append(42);
        CHECK(ns.size() == 1);
    }

    TEST_CASE("number series should keep track of max") {
        number_series ns;
        ns.append(42);
        CHECK(ns.max() == 42);

        ns.append(43);
        CHECK(ns.max() == 43);

        ns.append(21);
        CHECK(ns.max() == 43);
    }

    TEST_CASE("number series should keep track of min") {
        number_series ns;
        ns.append(42);
        CHECK(ns.min() == 42);

        ns.append(41);
        CHECK(ns.min() == 41);

        ns.append(55);
        CHECK(ns.min() == 41);
    }

    TEST_CASE("number series can make random series of length 10") {
        auto random_series = number_series::make_random(10);
        CHECK(random_series.size() == 10);
    }

    TEST_CASE("can add two number series") {
        auto ns1 = number_series(std::vector<int>{1, 2});
        auto ns2 = number_series(std::vector<int>{3, 4});
        auto ns3 = ns1 + ns2;
        CHECK(ns3.size() == 2);
    }

    TEST_CASE("can add two number series of different lengths") {
        auto ns1 = number_series(std::vector<int>{1, 9});
        auto ns2 = number_series(std::vector<int>{3, 4, 6, 7});
        auto ns3 = ns1 + ns2;
        CHECK(ns3.size() == 4);
        CHECK(ns3.max() == 13);
        CHECK(ns3.min() == 4);
    }
}