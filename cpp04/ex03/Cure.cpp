#include "Cure.hpp"

Cure::Cure(void): AMateria("cure"){
	return ;
}

Cure::Cure(const Cure& other): AMateria(other){
	return ;
}

Cure::~Cure(void){
	return ;
}

Cure& Cure::operator=(const Cure& other){
	this->AMateria::operator=(other);
	return (*this);
}

AMateria*	Cure::clone(void) const{
	return new Cure(*this);
}

void	Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() <<	std::endl;
}