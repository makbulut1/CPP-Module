//
// Created by Mehmet eren Akbulut on 12/5/22.
//

#include "Animal.hpp"

Animal::Animal(void): type("Animal"){
	std::cout << "Animal(void) constructor called" << std::endl;
}

Animal::Animal(std::string name) : type(name){
	std::cout << "Animal(\"" << type << "\") constructor called" << std::endl;
}

Animal::Animal(const Animal& other): type(other.type){
	std::cout << "Animal copy constructor called on " << other.type << std::endl;
}

Animal::~Animal(void){
	std::cout << "Animal destructor called for " << this->type << std::endl;
}

Animal& Animal::operator=(const Animal& other){
    this->type = other.type;
    return(*this);
}

std::string Animal::getType(void) const{
    return this->type;
}

void    Animal::makeSound(void) const{
    std::cout << "Animal default sound" << std::endl;
}