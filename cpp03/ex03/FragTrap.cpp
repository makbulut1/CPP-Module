//
// Created by Mehmet eren Akbulut on 12/2/22.
//

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
        : ClapTrap()
{
    std::cout << "FragTrap(void) constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
        : ClapTrap(name)
{
    std::cout << "FragTrap(\"" << name << "\") constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other)
        : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called on " << other._name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
    ClapTrap::operator=(rhs);
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called for " << this->_name << std::endl;
}

void FragTrap::attack(std::string const & target)
{
    std::cout << "FragTrap " << this->_name;
    if (this->_energyPoints > 0)
    {
        this->_energyPoints -= 5;
        std::cout << " attacked " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << " has too little energy points to attack." << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->_name << " would like to high five everyone!" << std::endl;
}