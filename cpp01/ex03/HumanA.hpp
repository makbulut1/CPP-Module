//
// Created by Mehmet eren Akbulut on 11/18/22.
//

#ifndef CPP_MODULE_HUMANA_HPP
#define CPP_MODULE_HUMANA_HPP

#include "Weapon.hpp"
class HumanA {
private:
    std::string name;
    Weapon* weapon;
public:
    HumanA();
    ~HumanA();

    void    setName();
        getName();
    void    getWeapen();
    void    setWeapen();
    void    attack();
};


#endif //CPP_MODULE_HUMANA_HPP
