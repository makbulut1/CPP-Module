//
// Created by Mehmet eren Akbulut on 3/16/23.
//

#include "RPN.hpp"

RPN::RPN() {}

void RPN::operatorController(char *str) const {
    for (int i = 0; str[i]; i++) {
        if (!(str[i] <= '9' && str[i] >= '0') && (str[i] != '-') && (str[i] != '+') && (str[i] != ' ') &&
            (str[i] != '*') && (str[i] != '/')) {
            std::cerr << "Error" << std::endl;
            exit(1);
        }
    }
}

void RPN::numberControler(char *str) const {
    for (int i = 0; str[i]; i++) {
        if (str[i] == '1') {
            if ((str[i + 1] != '0') && (str[i + 1] != ' ')) {
                std::cerr << "Error" << std::endl;
                exit(1);
            }
        }
    }
}

int RPN::rpn_calculator(char *str) {
    int num = 0, num1 = 0, num2 = 0, result = 0;
    char *token;

    token = strtok(str, " ");
    while (token != NULL) {
        if (isdigit(token[0])) {
            num = atoi(token);
            if (num > 10) {
                for (size_t i = 0; token[i]; i++) {
                    char s[2];
                    s[0] = token[i];
                    s[1] = 0;
                    num = atoi(s);
                    this->_stack.push(num);
                }
            } else
                this->_stack.push(num);
        } else {
            if (!this->_stack.empty()) {
                num2 = this->_stack.top();
                this->_stack.pop();
            }
            if (!this->_stack.empty()) {
                num1 = this->_stack.top();
                this->_stack.pop();
            }
            switch (token[0]) {
                case '+':
                    result = num1 + num2;
                    break;
                case '-':
                    result = num1 - num2;
                    break;
                case '*':
                    result = num1 * num2;
                    break;
                case '/':
                    result = num1 / num2;
                    break;
                default:
                    return -1;
            }
            this->_stack.push(result);
        }
        token = strtok(NULL, " ");
    }
    return this->_stack.top();
}

RPN::RPN(char *str) {
    operatorController(str);
    std::cout << rpn_calculator(str) << std::endl;
}

RPN::RPN(RPN &obj) {
    this->_stack = obj._stack;
}

RPN::~RPN() {}

RPN &RPN::operator=(RPN &obj) {
    this->_stack = obj._stack;
    return *this;
}