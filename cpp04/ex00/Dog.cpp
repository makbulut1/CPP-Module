//
// Created by Mehmet eren Akbulut on 12/5/22.
//

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog"){
	std::cout << "Dog(void) constructor called" << std::endl;
}
Dog::Dog(std::string type): Animal(type){
	std::cout << "Dog(\"" << type << "\") constructor called" << std::endl;
}
Dog::Dog(const Dog& other): Animal(other){
	std::cout << "Dog copy constructor called on " << other.type << std::endl;
}

Dog&    Dog::operator=(const Dog& other){
	this->type = other.type;
	return *this;
}

Dog::~Dog(void){
	std::cout << "Dog destructor called for " << this->type << std::endl;
}

void    Dog::makeSound(void) const{
	std::cout << "Bark" << std::endl;
}