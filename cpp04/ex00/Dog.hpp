//
// Created by Mehmet eren Akbulut on 12/5/22.
//

#ifndef CPP_MODULE_DOG_HPP
#define CPP_MODULE_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
public:
    Dog(void);
    Dog(std::string type);
    Dog(const Dog& other);

    Dog&    operator=(const Dog& other);

    ~Dog(void);

    void    makeSound(void) const;
};


#endif //CPP_MODULE_DOG_HPP
