//
// Created by Mehmet eren Akbulut on 12/15/22.
//

#include "Span.hpp"

Span::Span(const unsigned int &N) : _size(N){}

Span::Span(const Span &other) :\
_vector(other._vector), _size(other._size){
    return;
}

Span& Span::operator=(const Span &other) {
    this->_vector = other._vector;
    this->_size = other._size;
    return *this;
}

Span::~Span() {
    return;
}

void    Span::addNumber(int x) {
    if (this->_vector.size() < this->_size)
        this->_vector.push_back(x);
    else
        throw Span::ContainerFullException();
}

void    Span::addNumber(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end) {
    int distance = std::distance(begin, end);
    if (distance + this->_vector.size() > this->_size){
        this->_vector.insert(this->_vector.end(), begin, begin + (this->_size - this->_vector.size()));
        throw Span::ContainerFullException();
    }
    else
        this->_vector.insert(this->_vector.end(), begin, end);
}

unsigned int    Span::shortestSpan() const {
    std::vector<int> tmp;

    int (*iabs)(int) = &std::abs;
    if (this->_vector.size() <= 1)
        throw Span::ContainerFullException();
    std::adjacent_difference(this->_vector.begin(), this->_vector.end(), std::back_inserter(tmp));
    std::transform(tmp.begin(), tmp.end(), tmp.begin(), iabs);
    return *min_element(tmp.begin(), tmp.end());
}

unsigned int Span::longestSpan() const {
    std::vector<int> tmp;

    int (*iabs)(int) = &std::abs;
    if (this->_vector.size() <= 1)
        throw Span::ContainerFullException();
    std::adjacent_difference(this->_vector.begin(), this->_vector.end(), std::back_inserter(tmp));
    std::transform(tmp.begin(), tmp.end(), tmp.begin(), iabs);
    return *max_element(tmp.begin(), tmp.end());
}
