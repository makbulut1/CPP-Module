#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void)
        : _fixedPoint(0) {
}

Fixed::Fixed(int const val)
        : _fixedPoint(val << _fractorial) {
}

Fixed::Fixed(float const val)
        : _fixedPoint(int(roundf(val * (1 << _fractorial)))) {
}

Fixed::Fixed(const Fixed &fixed)
        : _fixedPoint(fixed._fixedPoint) {
}

Fixed::~Fixed(void) {
}

Fixed &Fixed::operator=(const Fixed &rhs) {
    this->_fixedPoint = rhs._fixedPoint;
    return *this;
}

bool Fixed::operator>(const Fixed &rhs) {
    return this->_fixedPoint > rhs._fixedPoint;
}

bool Fixed::operator<(const Fixed &rhs) {
    return this->_fixedPoint < rhs._fixedPoint;
}

bool Fixed::operator>=(const Fixed &rhs) {
    return this->_fixedPoint >= rhs._fixedPoint;
}

bool Fixed::operator<=(const Fixed &rhs) {
    return this->_fixedPoint <= rhs._fixedPoint;
}

bool Fixed::operator==(const Fixed &rhs) {
    return this->_fixedPoint == rhs._fixedPoint;
}

bool Fixed::operator!=(const Fixed &rhs) {
    return this->_fixedPoint != rhs._fixedPoint;
}

Fixed Fixed::operator+(const Fixed &rhs) {
    Fixed ret;

    ret.setRawBits(this->_fixedPoint + rhs._fixedPoint);
    return ret;
}

Fixed Fixed::operator-(const Fixed &rhs) {
    Fixed ret;

    ret.setRawBits(this->_fixedPoint - rhs._fixedPoint);
    return ret;
}

Fixed Fixed::operator*(const Fixed &rhs) {
    Fixed ret;

    ret.setRawBits(this->_fixedPoint * rhs._fixedPoint >> _fractorial);
    return ret;
}

Fixed Fixed::operator/(const Fixed &rhs) {
    Fixed ret;

    ret.setRawBits((this->_fixedPoint * (1 << _fractorial)) / rhs._fixedPoint);
    return ret;
}

Fixed &Fixed::operator++() {
    this->_fixedPoint++;
    return *this;
}

Fixed &Fixed::operator--() {
    this->_fixedPoint--;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp = *this;
    ++*this;
    return tmp;
}

Fixed Fixed::operator--(int) {
    Fixed tmp = *this;
    --*this;
    return tmp;
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

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    if (a > b)
        return b;
    return a;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    if (a < b)
        return b;
    return a;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    if (a._fixedPoint > b._fixedPoint)
        return b;
    return a;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    if (a._fixedPoint < b._fixedPoint)
        return b;
    return a;
}

std::ostream &operator<<(std::ostream &o, const Fixed &fixed) {
    o << fixed.toFloat();
    return o;
}