//
// Created by Mehmet eren Akbulut on 12/5/22.
//

#ifndef CPP_MODULE_WRONGCAT_HPP
#define CPP_MODULE_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
    WrongCat(void);
    WrongCat(std::string type);
    WrongCat(const WrongCat& other);

    WrongCat&    operator=(const WrongCat& other);

    ~WrongCat(void);

    void    makeSound(void) const;
};


#endif //CPP_MODULE_WRONGCAT_HPP
