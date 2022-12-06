#include "Dog.hpp"

Dog::Dog()
	: Animal("Dog"), _brain(new Brain())
{
	std::cout << "Dog(void) constructor called" << std::endl;
}

Dog::Dog(std::string type)
	: Animal(type), _brain(new Brain())
{
	std::cout << "Dog(\"" << type << "\") constructor called" << std::endl;
}

Dog::Dog(const Dog& other)
	: Animal(other)
{
	this->_brain = new Brain(*other._brain);
	std::cout << "Dog copy constructor called on " << other.type << std::endl;
}

Dog& Dog::operator=(const Dog& rhs)
{
	this->type = rhs.type;
	this->_brain = new Brain(*rhs._brain);
	return *this;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog destructor called for " << this->type << std::endl;
}

Brain* Dog::getBrain() const
{
	return this->_brain;
}

void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}