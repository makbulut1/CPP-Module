//
// Created by Mehmet eren Akbulut on 11/18/22.
//
#include "Zombie.hpp"

int main(void) {
    Zombie zombie1("Zombie1");
    Zombie *zombie2 = newZombie("Zombie2");
    zombie1.announce();
    zombie2->announce();
    randomChump("zombie3");
    delete zombie2;
    return 0;
}