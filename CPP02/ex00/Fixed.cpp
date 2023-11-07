#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed(const Fixed &object) {
    std::cout << "Copy constructor called." << std::endl;
    *this = object;
}

Fixed::~Fixed() {
    std::cout << "Destructor called." << std::endl;
}

Fixed &Fixed::operator=(const Fixed &object) {
    std::cout << "Copy assignement operator called.";
    if (this != &object) {
        this->value = object.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function was called." << std::endl;
    return value;
}

void Fixed::setRawBits(const int raw) {
    value = raw;
}