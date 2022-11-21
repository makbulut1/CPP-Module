//
// Created by Mehmet eren Akbulut on 11/18/22.
//

#ifndef CPP_MODULE_HUMANB_HPP
#define CPP_MODULE_HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
    std::string _name;
    Weapon* _weapon;
public:
    HumanB(std::string _name);
    ~HumanB(void);
    void    setWeapon(Weapon &weapon);
    void    attack(void) const;
};


#endif //CPP_MODULE_HUMANB_HPP
