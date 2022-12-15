//
// Created by Mehmet eren Akbulut on 12/15/22.
//
#include "iter.hpp"

template <typename T>
void printElement(T element) {
    std::cout << element << std::endl;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int length = sizeof(numbers) / sizeof(int);

    iter(numbers, length, printElement);

    return 0;
}