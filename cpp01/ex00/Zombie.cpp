//
// Created by Mehmet eren Akbulut on 11/18/22.
//

#include "Zombie.hpp"
#include <iostream>

void Zombie::announce(void) const {
    std::cout << "<" << this->name << ">" << " : " <<" BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name): name(name) {

}

Zombie::~Zombie() {
    std::cout<< "'" << this->name << "'" << " died" << std::endl;
}