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

void swap_ends_static_buf(int arr[], int size) {
    int buffer[size];
    memcpy(buffer, arr + (size/2), (size - (size/2)) * sizeof(int));
    memcpy(buffer + size/2, arr, (size/2) * sizeof(int));
    memcpy(arr, buffer, size * sizeof(int));
}

void swap_ends_dyn_buf(int arr[], int size) {
    int *buffer = (int*) malloc(size*sizeof(int));
    memcpy(buffer, arr + (size/2), (size - (size/2)) * sizeof(int));
    memcpy(buffer + size/2, arr, (size/2) * sizeof(int));
    memcpy(arr, buffer, size * sizeof(int));
    free(buffer);
}


