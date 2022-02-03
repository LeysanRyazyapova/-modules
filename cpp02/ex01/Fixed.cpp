#include "Fixed.hpp"
#include <cmath>
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
Fixed::Fixed(const int param) {
    std::cout << "Int constructor called" << std::endl;
    this->setRawBits(param << rawBits);
    return;
}
Fixed::Fixed(const float param) {
    std::cout << "Float constructor called" << std::endl;
    this->setRawBits((int)roundf(param *(1 << rawBits)));
    return;
}
int Fixed::toInt( void ) const {
    return (int) this->fixPoint >> rawBits;
}
float Fixed::toFloat() const {
    return (float) this->fixPoint / (1<<rawBits);
}
Fixed & Fixed::operator=(const Fixed & rhs) {
    std::cout << "Assignation operator called" << std::endl;
    this->fixPoint = rhs.getRawBits();
    return *this;
}
int Fixed::getRawBits( void ) const {
    return this->fixPoint;
}
void Fixed::setRawBits(const int raw) {
    this->fixPoint = raw;
    return;
}
std::ostream& operator<<(std::ostream &o, const Fixed& rhs) {
    o << rhs.toFloat();
    return o;
}