//
// Created by Mehmet eren Akbulut on 12/15/22.
//

#ifndef CPP_MODULE_SPAN_HPP
#define CPP_MODULE_SPAN_HPP
#include "vector"
#include "iostream"
#include "algorithm"
#include <numeric>
#include <cstdlib>

class Span {
private:
    std::vector<int> _vector;
    unsigned int _size;
public:
    Span(const unsigned int& N);

    ~Span(void);

    Span(const Span& other);

    Span& operator=(const Span& other);

    void            addNumber(int x);

    void            addNumber(const std::vector<int>::iterator& begin,\
    const std::vector<int>::iterator& end);

    unsigned int    shortestSpan(void) const;
    unsigned int    longestSpan(void) const;

    class ContainerFullException : public std::exception{
    public:
        const char * what() const throw(){
            return "Container full.";
        }
    };
    class ContainerEmptyExeption : public std::exception{
    public:
        const char * what() const throw(){
            return "Container Empty.";
        }
    };
};


#endif //CPP_MODULE_SPAN_HPP
