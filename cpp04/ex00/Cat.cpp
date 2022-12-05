//
// Created by Mehmet eren Akbulut on 12/5/22.
//

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"){
    std::cout << "Cat(void) constructor called" << std::endl;
}

Cat::Cat(std::string type): Animal(type){
    std::cout << "Cat (\"" << type << "\") constructor called" << std::endl;
}

Cat::Cat(const Cat& other)
	: Animal(other)
{
	std::cout << "Cat copy constructor called on " << other.type << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	this->type = other.type;
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called for " << this->type << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}