#include "Fixed.hpp"
#include <iostream>
Fixed::Fixed(){
    this->fixPoint = 0;
    std::cout << "Default constructor called" << std::endl;
    return;
}
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
    return;
}
Fixed::Fixed(const Fixed &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}
Fixed & Fixed::operator=(const Fixed & rhs) {
    std::cout << "Assignation operator called" << std::endl;
    this->fixPoint = rhs.getRawBits();
    return *this;
}
int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixPoint;
}
void Fixed::setRawBits(const int raw) {
    this->fixPoint = raw;
    return;
}