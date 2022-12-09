#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void){
	for(int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource& other){
	for (int i = 0; i < 4; i++)
		this->_materia[i] = (other._materia[i]) ? other._materia[i]->clone(): NULL;
	return ;
}

MateriaSource& MateriaSource::operator=(const MateriaSource&other){
	if (this != &other)
	{
		this->~MateriaSource();
		for (int i = 0; i < 4; i++)
			this->_materia[i] = other._materia[i] ? other._materia[i]->clone() : NULL;
	}
	return *this;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->_materia[i])
			delete this->_materia[i];
}

void	MateriaSource::learnMateria(AMateria* m){
	if (m)
		for(int i = 0; i < 4; i++)
			if (!this->_materia[i]){
				this->_materia[i] = m;
				break;
			}
}

AMateria*	MateriaSource::createMateria(const std::string& type){
	for (int i = 0; i < 4; i++)
		if (this->_materia[i] && this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	return (NULL);
}