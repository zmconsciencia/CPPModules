#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int _value) {
    std::cout << "Int constructor called" << std::endl;
    this->setRawBits(_value << fractionalBits);
}

Fixed::Fixed(const float _value) {
    std::cout << "Float constructor called" << std::endl;
    this->setRawBits(roundf(_value * (1 << fractionalBits)));
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->value = other.value;
    }
    return *this;
}

int Fixed::getRawBits() const {
    return value;
}

void Fixed::setRawBits(const int raw) {
    value = raw;
}

float Fixed::toFloat() const {
    return (((float) this->getRawBits()) / (1 << fractionalBits));
}

int Fixed::toInt() const {
    return (this->getRawBits() >> fractionalBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}