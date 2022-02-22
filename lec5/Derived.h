//
// Created by mads on 2/22/22.
//

#ifndef SP2022_DERIVED_H
#define SP2022_DERIVED_H

#include <iostream>
#include "Base.h"


class Derived: public Base {
public:
    void increment() override {
        integer++;
    }

    Derived() = default;

};


#endif //SP2022_DERIVED_H
