//
// Created by Mehmet eren Akbulut on 12/5/22.
//

#include "WrongCat.hpp"

WrongCat::WrongCat()
	: WrongAnimal("Cat")
{
	std::cout << "WrongCat(void) constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type)
	: WrongAnimal(type)
{
	std::cout << "WrongCat(\"" << type << "\") constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
	: WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor called on " << other.type << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
	this->type = rhs.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called for " << this->type << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}