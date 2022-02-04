//
// Created by Mads Smed on 04/02/2022.
//

#include <iostream>
#include <vector>
#include <utility>
#include <cstring>
using namespace std;

void swap_ends(int arr[], int size) {
    for (int i = size/2 - 1, j = size - 1; i >= 0; --i, --j)
        swap(arr[i], arr[j]);
}


void swap_ends(vector<int>& arr) { // overloading the same fn-name
    for (int i = arr.size()/2 - 1, j = arr.size() - 1; i >= 0; --i, --j)
        swap(arr[i], arr[j]);
}
