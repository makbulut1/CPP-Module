//
// Created by Mehmet eren Akbulut on 12/15/22.
//

#ifndef CPP_MODULE_ITER_HPP
#define CPP_MODULE_ITER_HPP
#include "iostream"
template <typename T>
void iter(T *array, int length, void (*func)(T)) {
    for (int i = 0; i < length; i++) {
        func(array[i]);
    }
}
#endif //CPP_MODULE_ITER_HPP
