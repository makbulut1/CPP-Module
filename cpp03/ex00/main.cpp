//
// Created by Mehmet eren Akbulut on 11/30/22.
//

#include "ClapTrap.hpp"

int main()
{
    ClapTrap john("Ahmet");
    ClapTrap jim("Mehmet");
    ClapTrap joe("Samim");

    john.attack("Marge");
    john.attack("Bart");
    john.attack("Homer");
    john.takeDamage(5);
    jim.takeDamage(9);
    jim.takeDamage(10);
    joe.beRepaired(10);
    joe.takeDamage(19);
}