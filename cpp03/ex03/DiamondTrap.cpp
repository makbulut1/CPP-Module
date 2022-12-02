//
// Created by Mehmet eren Akbulut on 12/2/22.
//

#include "DiamondTrap.hpp"
#include <iostream>
DiamondTrap::DiamondTrap()
        : ClapTrap("default_clap_name"), ScavTrap(), FragTrap(), _name("default")
{
    std::cout << "DiamondTrap(void) constructor called" << std::endl;
    this->FragTrap::_attackDamage = 100;
    this->ScavTrap::_energyPoints = 50;
    this->FragTrap::_attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name)
        : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name)
{
    std::cout << "DiamondTrap(\"" << name << "\") constructor called" << std::endl;
    this->FragTrap::_attackDamage = 100;
    this->ScavTrap::_energyPoints = 50;
    this->FragTrap::_attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
        : ClapTrap(other), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap copy constructor called on " << other._name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    ClapTrap::operator=(other);
    ScavTrap();
    FragTrap();
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called for " << this->_name << std::endl;
}

void DiamondTrap::attack(std::string const & target)
{
    this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "whoAmI(): I am DiamondTrap " << this->_name << " and my ClapTrap name is " << this->ClapTrap::_name << std::endl;
}