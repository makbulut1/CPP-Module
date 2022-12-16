//
// Created by Mehmet eren Akbulut on 12/15/22.
//

#ifndef CPP_MODULE_EASYFIND_HPP
#define CPP_MODULE_EASYFIND_HPP
#include "iostream"
#include "algorithm"

class ElementNotFound : public std::exception{
public:
    const char * what() const throw(){
        return "Element not found.";
    }
};

template<class T>
typename T::iterator easyfind(T& conteiner, int find){
    typename T::iterator it = std::find(conteiner.begin(), conteiner.end(), find);
    if (it == conteiner.end())
        throw ElementNotFound();
    else
        return it;
}
#endif //CPP_MODULE_EASYFIND_HPP
