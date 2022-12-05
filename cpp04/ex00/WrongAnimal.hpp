//
// Created by Mehmet eren Akbulut on 12/5/22.
//

#ifndef CPP_MODULE_WrongANIMAL_HPP
#define CPP_MODULE_WrongANIMAL_HPP


#include <iostream>

class WrongAnimal{
protected:
    std::string type;
public:
    WrongAnimal(void);
    WrongAnimal(std::string name);
    ~WrongAnimal(void);
    WrongAnimal(const WrongAnimal& other);

    std::string getType(void) const;
    WrongAnimal& operator=(const WrongAnimal& other);

    virtual void    makeSound(void) const;
};


#endif //CPP_MODULE_WrongANIMAL_HPP
