#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _type(type){
    return ;
}

AMateria::~AMateria(void){
	return ;
}

AMateria::AMateria(const AMateria& other): _type(other._type){
	return ;
}

AMateria&	AMateria::operator=(const AMateria& other){
    this->_type = other._type;
	return (*this);
}

std::string const&	AMateria::getType(void) const
{
    return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}
