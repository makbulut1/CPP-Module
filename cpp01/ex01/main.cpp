//
// Created by Mehmet eren Akbulut on 11/18/22.
//
#include "Zombie.hpp"

#include "Zombie.hpp"

int main()
{
    int const count = 42;
    Zombie *horde = zombieHorde(count, "zombie");

    horde->announce();
    for (int i = 0; i < count; i++)
        horde[i].announce();
    delete [] horde;
}