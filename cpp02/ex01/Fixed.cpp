#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void)
        : _fixedPoint(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const val) {
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPoint = (val << _fractorial);
}

Fixed::Fixed(float const val) {
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPoint = int(roundf(val * (1 << _fractorial)));
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    Fixed::operator=(other);
}

Fixed &Fixed::operator=(const Fixed &rhs) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixedPoint = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    return this->_fixedPoint;
}

void Fixed::setRawBits(int const raw) {
    this->_fixedPoint = raw;
}

float Fixed::toFloat(void) const {
    return float(this->_fixedPoint) / (1 << _fractorial);
}

int Fixed::toInt(void) const {
    return this->_fixedPoint >> _fractorial;
}

std::ostream &operator<<(std::ostream &o, const Fixed &fixed) {
    o << fixed.toFloat();
    return o;
}