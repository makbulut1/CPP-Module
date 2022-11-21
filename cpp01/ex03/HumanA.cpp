//
// Created by Mehmet eren Akbulut on 11/18/22.
//

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string _name, Weapon _weapon) : _name(_name), _weapon(_weapon){

}

HumanA::~HumanA(void) {}

void    attack(void){
    std::cout << this->_name << "attack " << std::endl;
}