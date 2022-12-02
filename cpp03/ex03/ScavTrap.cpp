//
// Created by Mehmet eren Akbulut on 12/2/22.
//

#include "ScavTrap.hpp"
#include <iostream>
ScavTrap::ScavTrap(void ): ClapTrap() {
    std::cout << "ScavTrap(void) constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    std::cout << "ScavTrap("<< name <<") constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other){
    std::cout << "ScavTrap copy constructor called on " << other._name << std::endl;
}

ScavTrap&    ScavTrap::operator=(const ScavTrap &rhs) {
    ClapTrap::operator=(rhs);
    return (*this);
}

ScavTrap::~ScavTrap(){
    std::cout << "ClapTrap destructor called for " << this->_name << std::endl;
}

void    ScavTrap::attack(const std::string &target) {
    std::cout << "ScavTrap " << this->_name;
    if (this->_energyPoints > 0)
    {
        this->_energyPoints -= 5;
        std::cout << " attacked " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << " has too little energy points to attack." << std::endl;
}

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->_name << " has entered Gate keeper mode!" << std::endl;
}