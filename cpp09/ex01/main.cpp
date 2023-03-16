//
// Created by Mehmet eren Akbulut on 3/16/23.
//
#include "RPN.hpp"

int main(int ac, char **av) {
    if (ac == 2) {
        RPN rpn(av[1]);
    } else
        std::cerr << "Error : Enter ./execute \"9 2 - [...]  + 7 4 *\" " << std::cout;
    return 0;
}