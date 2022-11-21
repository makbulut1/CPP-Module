//
// Created by Mehmet eren Akbulut on 11/18/22.
//
#include "Zombie.hpp"
#include "iostream"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *horde = new Zombie[N];

    for (int i = 0; i < N; i++)
        horde[i].setName(name + std::to_string(i + 1));
    return horde;
}