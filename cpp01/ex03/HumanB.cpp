//
// Created by Mehmet eren Akbulut on 11/18/22.
//

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>
HumanB::HumanB(std::string _name): _name(_name) {}

HumanB::~HumanB(void ) {}

void    HumanB::setWeapon(Weapon &weapon) {
    this->_weapon = &weapon;
}

void HumanB::attack(void) const{
    if ((this->_weapon))
        std::cout << this->_name << " attacks with his " << this->_weapon->getType();
    else {
        std::cout << "bare fists";
    }
    std::cout << std::endl;
}
