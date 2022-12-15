//
// Created by Mehmet eren Akbulut on 12/15/22.
//

#ifndef CPP_MODULE_ARRAY_HPP
#define CPP_MODULE_ARRAY_HPP

#include "exception"
#include "iostream"

template<typename T>
class Array{
private:
    T* arr;
    unsigned int len;
public:
    Array(){
        arr = new T[1];
        arr[0] = NULL;
        this->len = 1;
    }
    Array(unsigned int value){
        arr = new T[value];
        this->len = value;
    }
    Array( const Array &cpy ){
        *this = cpy;
    }
    ~Array(){
        delete[] arr;
    }

    Array& operator=(const Array&obj){
        if (this == &obj)
            return *this;
        len = obj.len;
        arr = new T[len];
        for(unsigned int j = 0; j < len; j++)
            arr[j] = obj.arr[j];
        return *this;
    }

    class OutoftoRange : public std::exception
    {
        const char * what() const throw()
        {
            return "Out of to range!";
        }
    };

    T& operator[](unsigned int a){
        if (a >= len)
            throw OutoftoRange();
        else
            return arr[a];
    }

    unsigned int size(void){
        return len;
    }

};
#endif //CPP_MODULE_ARRAY_HPP
