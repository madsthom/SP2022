//
// Created by Mads Smed on 08/02/2022.
//

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../lib/doctest.h"
#include "max_functions.h"

TEST_SUITE("testing lecture 2 max functions") {
    TEST_CASE("Normal c-like styles") {
        double a = 4, b = 10;
        std::cout << max(&a, &b);
        // CHECK(max(&a, &b) == b);
    }
}
