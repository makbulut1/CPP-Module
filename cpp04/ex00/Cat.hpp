//
// Created by Mehmet eren Akbulut on 12/5/22.
//

#ifndef CPP_MODULE_CAT_HPP
#define CPP_MODULE_CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
public:
    Cat(void);
    Cat(std::string type);
    Cat(const Cat& other);

    Cat&    operator=(const Cat& other);

    ~Cat(void);

    void    makeSound(void) const;
};


#endif //CPP_MODULE_CAT_HPP
