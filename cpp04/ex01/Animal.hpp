//
// Created by Mehmet eren Akbulut on 12/5/22.
//

#ifndef CPP_MODULE_ANIMAL_HPP
#define CPP_MODULE_ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal {
protected:
    std::string type;
public:
    Animal(void);
    virtual ~Animal(void);
    Animal(std::string name);
    Animal(const Animal& other);

    std::string getType(void) const;
    Animal& operator=(const Animal& other);

    virtual void    makeSound(void) const;
};


#endif //CPP_MODULE_ANIMAL_HPP
