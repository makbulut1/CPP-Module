//
// Created by Mehmet eren Akbulut on 3/16/23.
//
#include "PmergeMe.hpp"

int main(int ac, char **av){
    if (ac > 1){
        PmergeMe peMerge(ac, av);
    }
    else
        std::cerr << "Error" << std::endl;
    return 0;
}