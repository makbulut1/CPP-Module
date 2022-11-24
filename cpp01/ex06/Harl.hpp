//
// Created by Mehmet eren Akbulut on 24.11.2022.
//

#ifndef CPP_MODULE_HARL_HPP
#define CPP_MODULE_HARL_HPP

#include "iostream"

class Harl {
private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
public:
    Harl();
    ~Harl();
    void    complain(std::string level);
};


#endif //CPP_MODULE_HARL_HPP
