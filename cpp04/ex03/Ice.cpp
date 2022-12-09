#include "Ice.hpp"
#include <iostream>

Ice::Ice(void): AMateria("ice"){
	return ;
}

Ice::Ice(const Ice& other): AMateria(other){
	return ;
}

Ice& Ice::operator=(const Ice& other){
	this->AMateria::operator=(other);
	return *this;
}

Ice::~Ice(void){
	return ;
}

void	Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at" << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const{
	return new Ice(*this);
}