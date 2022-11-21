//
// Created by Mehmet eren Akbulut on 11/18/22.
//

#ifndef CPP_MODULE_HUMANB_HPP
#define CPP_MODULE_HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
    std::string _name;
    Weapon& _weapon;
public:
    HumanB();
    ~HumanB();

    void    attack(void);
};


#endif //CPP_MODULE_HUMANB_HPP
