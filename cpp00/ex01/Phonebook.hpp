#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
private:

    static int  _count;
    
	Contact	_contacts[8];
	int		_index;

public:

    Phonebook(/* args */);
    ~Phonebook();
	
	Contact	getContact(int	index) const;
	int		getCount() const;
	
	void	setContact(Contact contact);
};

#endif