//
// Created by Mehmet eren Akbulut on 12/14/22.
//

#ifndef CPP_MODULE_DATA_HPP
#define CPP_MODULE_DATA_HPP

#include "iostream"

typedef struct  s_Data{
    std::string firstName;
    std::string lastName;
    std::string nickname;
    int		    age;
    double	    level;
}               Data;

uintptr_t   serialize(Data* ptr);

Data*        deserialize(uintptr_t raw);

#endif //CPP_MODULE_DATA_HPP
