#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : value(0) {
}

Fixed::Fixed(const int _value) {
    this->setRawBits(_value << fractionalBits);
}

Fixed::Fixed(const float _value) {
    this->setRawBits(roundf(_value * (1 << fractionalBits)));
}

Fixed::Fixed(const Fixed &other) {
    *this = other;
}

Fixed::~Fixed() {
    return ;
}

Fixed &Fixed::operator=(const Fixed &other) {
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

bool Fixed::operator<(const Fixed &fixed) const {
    return this->getRawBits() < fixed.getRawBits();
}

bool Fixed::operator>(const Fixed &fixed) const {
    return this->getRawBits() > fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed &fixed) const {
    return this->getRawBits() >= fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed &fixed) const {
    return this->getRawBits() <= fixed.getRawBits();
}

bool Fixed::operator==(const Fixed &fixed) const {
    return this->getRawBits() == fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed &fixed) const {
    return this->getRawBits() != fixed.getRawBits();
}

Fixed &Fixed::operator++() {
    this->value += 1;
    return *this;
}

Fixed Fixed::operator++(int n) {
    (void)n;
    Fixed temp;
    temp.value = this->value;
    this->value++;
    return temp;
}

Fixed &Fixed::operator--() {
    this->value -= 1;
    return *this;
}

Fixed Fixed::operator--(int n) {
    (void)n;
    Fixed temp;
    temp.value = this->value;
    this->value--;
    return temp;
}

Fixed Fixed::operator+(const Fixed &fixed) const {
    Fixed op;
    op = this->toFloat() + fixed.toFloat();
    return (op);
}

Fixed Fixed::operator*(const Fixed &fixed) const {
    Fixed op;
    op = this->toFloat() * fixed.toFloat();
    return op;
}

Fixed Fixed::operator-(const Fixed &fixed) const {
    Fixed op;
    op = this->toFloat() - fixed.toFloat();
    return (op);
}

Fixed Fixed::operator/(const Fixed &fixed) const {
    Fixed op;
    op = this->toFloat() / fixed.toFloat();
    return (op);
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return (a > b ? a : b);
}

Fixed const &Fixed::max(const Fixed &a,const Fixed &b) {
    return (a > b ? a : b);
}

Fixed const &Fixed::min(const Fixed &a,const Fixed &b) {
    return (a < b ? a : b);
}