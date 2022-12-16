//
// Created by Mehmet eren Akbulut on 12/16/22.
//

#ifndef MAKBULUT_MUTANSTACK_HPP
#define MAKBULUT_MUTANSTACK_HPP
#include "iostream"
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
public:
    MutantStack() {}
    //MutantStack(MutantStack const &mutantStack) { *this = mutantStack; }
    MutantStack& operator=(MutantStack const &mutantStack) {
        (void)mutantStack;
        return *this;
    }
    virtual ~MutantStack() {}
    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator begin(){ return this->c.begin();}
    iterator end() { return this->c.end();}
};


#endif //MAKBULUT_MUTANSTACK_HPP
