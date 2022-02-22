//
// Created by mads on 2/22/22.
//

#ifndef SP2022_BASE_H
#define SP2022_BASE_H


class Base {
public:
    int integer = 0;
    virtual void increment() = 0;
    void decrement() {
        integer--;
    }
    Base() = default;
    virtual ~Base() = default;
};


#endif //SP2022_BASE_H
