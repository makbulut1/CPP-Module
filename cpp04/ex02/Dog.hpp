//
// Created by Mehmet eren Akbulut on 12/5/22.
//

#ifndef CPP_MODULE_DOG_HPP
#define CPP_MODULE_DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
private:
    Brain* _brain;
public:
    Dog(void);
    Dog(std::string type);
    Dog(const Dog& other);

    Dog&    operator=(const Dog& other);

    ~Dog(void);
    Brain* getBrain(void) const;
    void    makeSound(void) const;
};


#endif //CPP_MODULE_DOG_HPP
