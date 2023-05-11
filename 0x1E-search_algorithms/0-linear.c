#include "search_algos.h"
/**
* linear search function
* Store value in array
*/
#include <iostream>

int linear_search(int *array, size_t size, int value) {
    if (array == nullptr) {
        return -1;
    }

    for (size_t i = 0; i < size; ++i) {
        std::cout << "Comparing " << array[i] << " to " << value << std::endl;
        if (array[i] == value) {
            return i;
        }
    }

    return -1;
}

/**
* linear search function
*/
int main() {
    int array[] = {5, 2, 9, 1, 7};
    size_t size = sizeof(array) / sizeof(array[0]);
    int value = 9;

    int index = linear_search(array, size, value);
    if (index != -1) {
        std::cout << "Value " << value << " found at index " << index << std::endl;
    } else {
        std::cout << "Value " << value << " not found in the array" << std::endl;
    }

    return 0;
}

/**
* gcc output
*/

Comparing 5 to 9
Comparing 2 to 9
Comparing 9 to 9
Value 9 found at index 2

