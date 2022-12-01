//
// Created by Mehmet eren Akbulut on 11/30/22.
//

#include "ClapTrap.hpp"
#include "iostream"

ClapTrap::ClapTrap(std::string name) :
        _hitPoints(10), _energyPoints(10), _attackDamage(0), _name(name){
    return;
}

void ClapTrap::attack(const std::string &target) {
    (void) target;
}

void ClapTrap::takeDamage(unsigned int amount) {
    (void) amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
    (void) amount;
}

void ClapTrap::setEnergyPoints(int _energyPoints) {
    this->_energyPoints = _energyPoints;
}

void    ClapTrap::setHitPoints(int  _hitPoints) {
    this->_hitPoints = _hitPoints;
}

void    ClapTrap::setAttackDamage(int _attackDamage) {
    this->_attackDamage = _attackDamage;
}

std::string ClapTrap::getName() {
    return this->_name;
}

int     ClapTrap::getAttackDamage() {
    return  this->_attackDamage;
}

int     ClapTrap::getEnergyPoints() {
    return this->_energyPoints;
}

int     ClapTrap::getHitPoints() {
    return this->_energyPoints;
}