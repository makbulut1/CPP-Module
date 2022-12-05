//
// Created by Mehmet eren Akbulut on 12/5/22.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
	: type("")
{
	std::cout << "WrongAnimal(void) constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
	: type(type)
{
	std::cout << "WrongAnimal(\"" << type << "\") constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
	: type(other.type)
{
	std::cout << "WrongAnimal copy constructor called on " << other.type << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
	this->type = rhs.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called for " << this->type << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Default WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}