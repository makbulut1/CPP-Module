//
// Created by Mehmet eren Akbulut on 11/30/22.
//

#include "ClapTrap.hpp"
#include "iostream"

ClapTrap::ClapTrap(void) : _name("Default"), _attackDamage(0), _hitPoints(10), _energyPoints(10) {
    std::cout << "ClapTrap(void) destructor called" << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name) : _hitPoints(10), _energyPoints(10), _attackDamage(0), _name(name) {
    std::cout << this->_name <<" character crated." << std::endl;
    return;
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap) : _energyPoints(ClapTrap._energyPoints), _attackDamage(ClapTrap._attackDamage), _hitPoints(ClapTrap._hitPoints) {
    std::cout << "ClapTrap copy constructor called on " << ClapTrap._name << std::endl;
    return ;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap destructor called for" << this->_name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    this->_name = other._name;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    this->_hitPoints = other._hitPoints;
    return (*this);
}

void ClapTrap::attack(const std::string &target) {
    std::cout << "ClapTrap " << this->_name;
    if (this->_energyPoints > 0){
        this->_energyPoints -= (this->_energyPoints >= 5) ? 5: this->_energyPoints;
        std::cout << " attack " << target << ", causing " << this->_name << " points of damage!" << std::endl;
    }
    else
        std::cout << " has too little energy point to attack " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << this->_name;
    if (this->_hitPoints == 0)
        std::cout << " is already dead, stop it!";
    else if (amount > this->_hitPoints)
    {
        std::cout << " takes " << this->_hitPoints << " damage and dies!" << std::endl;
        this->_hitPoints = 0;
    }
    else
    {
        this->_hitPoints -= amount;
        std::cout << " takes " << amount << " damage, " << this->_hitPoints << " hp remaining!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    this->_hitPoints += amount;
    std::cout << "ClapTrap " << this->_name << " is healed " << amount << " hit points, now has " << this->_hitPoints << " hit points." << std::endl;
}
