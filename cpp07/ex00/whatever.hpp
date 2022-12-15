//
// Created by Mehmet eren Akbulut on 12/15/22.
//

#ifndef CPP_MODULE_WHATEVER_HPP
#define CPP_MODULE_WHATEVER_HPP
#include "iostream"

template<typename T> void swap(T &a, T &b){
    T tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template<typename T>T max(T& a, T& b){
    if (a < b)
        return b;
    return a;
}
template<typename T>T min(T& a, T& b){
    if (a > b)
        return b;
    return a;
}

#endif //CPP_MODULE_WHATEVER_HPP
