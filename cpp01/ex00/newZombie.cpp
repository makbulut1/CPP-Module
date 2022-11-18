//
// Created by Mehmet eren Akbulut on 11/18/22.
//
#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    return new Zombie(name);
}