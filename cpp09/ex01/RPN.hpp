//
// Created by Mehmet eren Akbulut on 3/16/23.
//

#ifndef CPP_MODULE_RPN_HPP
#define CPP_MODULE_RPN_HPP

#include "stack"
#include "iostream"

class RPN {
public:
    RPN();

    RPN(char *);

    RPN(RPN &obj);

    ~RPN();

    RPN &operator=(RPN &obj);

    int rpn_calculator(char *);

    void numberControler(char *str) const;

    void operatorController(char *str) const;

private:
    std::stack<int> _stack;
};


#endif //CPP_MODULE_RPN_HPP
