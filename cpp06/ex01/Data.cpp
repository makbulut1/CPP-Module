//
// Created by Mehmet eren Akbulut on 12/14/22.
//

#include "Data.hpp"

uintptr_t   serialize(Data* ptr){
    uintptr_t a = reinterpret_cast<uintptr_t>(ptr);
    return a;
}
Data*        deserialize(uintptr_t raw){
    Data *a = reinterpret_cast<Data*>(raw);
    return a;
}
