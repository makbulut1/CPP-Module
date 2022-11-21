//
// Created by Mehmet eren Akbulut on 11/18/22.
//

#ifndef CPP_MODULE_HUMANA_HPP
#define CPP_MODULE_HUMANA_HPP

#include "Weapon.hpp"
class HumanA {
private:
    std::string _name;
    Weapon& _weapon;
public:
    HumanA(std::string, Weapon _weapon);
    ~HumanA(void);

    void    attack(void);
};


#endif //CPP_MODULE_HUMANA_HPP
