//
// Created by Mehmet eren Akbulut on 26.11.2022.
//

#include "Fixed.hpp"
#include "iostream"

Fixed::Fixed(void) :
        _fixedPoint(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPoint);
}

void Fixed::setRawBits(int _fixedPoint) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPoint = _fixedPoint;
}

Fixed &Fixed::operator=(Fixed &other) {
    std::cout << "Copy assigment operator called" << std::endl;
    this->_fixedPoint = other.getRawBits();
    return *this;
}