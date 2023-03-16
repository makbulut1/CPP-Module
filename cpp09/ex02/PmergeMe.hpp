//
// Created by Mehmet eren Akbulut on 3/16/23.
//

#ifndef CPP_MODULE_PMERGEME_HPP
#define CPP_MODULE_PMERGEME_HPP
#include "deque"
#include "list"
#include "iostream"

class PmergeMe {
    std::deque<int> _inputDeque;
    std::list<int> _inputList;
public:
    PmergeMe(int ac, char **av);
    template <typename T>
    void display(const T& container);
    void mergeInsertSortDeque(std::deque<int>& arr);
    void mergeInsertSortList(std::list<int>& arr);
    void    validCheck(int ac, char **av);
};


#endif //CPP_MODULE_PMERGEME_HPP
