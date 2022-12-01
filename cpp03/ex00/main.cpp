//
// Created by Mehmet eren Akbulut on 11/30/22.
//

#include "ClapTrap.hpp"
#include "iostream"

int main(void)
{
    ClapTrap a("Ahmet");

    std::cout << "attack " << a.getAttackDamage() << std::endl;
    std::cout << "Hit Points " << a.getHitPoints() << std::endl;
    std::cout << "Energy Points " << a.getEnergyPoints() << std::endl;

    std::cout << std::endl;
    return  0;
}