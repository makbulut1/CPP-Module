//
// Created by Mehmet eren Akbulut on 12/5/22.
//

#ifndef CPP_MODULE_CAT_HPP
#define CPP_MODULE_CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
private:
    Brain* _brain;
public:
    Cat(void);
    Cat(std::string type);
    Cat(const Cat& other);

    Cat&    operator=(const Cat& other);

    ~Cat(void);
    Brain* getBrain() const;
    void    makeSound(void) const;
};


#endif //CPP_MODULE_CAT_HPP
