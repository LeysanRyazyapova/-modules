#include "Fixed.hpp"
#include <cmath>
Fixed::Fixed(){
    this->fixPoint = 0;
    return;
}
Fixed::~Fixed() {
    return;
}
Fixed::Fixed(const Fixed &src) {
    *this = src;
    return;
}
Fixed::Fixed(const int param) {
    this->setRawBits(param << rawBits);
    return;
}
Fixed::Fixed(const float param) {
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
    this->fixPoint = rhs.getRawBits();
    return *this;
}
bool Fixed::operator>(const Fixed & rhs) const {
    if (this->fixPoint > rhs.getRawBits())
        return true;
    else
        return false;
}
bool Fixed::operator<(const Fixed & rhs) {
    if (this->fixPoint < rhs.getRawBits())
        return true;
    else
        return false;
}
bool Fixed::operator>=(const Fixed & rhs) {
    if (this->fixPoint >= rhs.getRawBits())
        return true;
    else
        return false;
}
bool Fixed::operator<=(const Fixed & rhs) {
    if (this->fixPoint <= rhs.getRawBits())
        return true;
    else
        return false;
}
bool Fixed::operator==(const Fixed & rhs) {
    if (this->fixPoint == rhs.getRawBits())
        return true;
    else
        return false;
}
bool Fixed::operator!=(const Fixed & rhs) {
    if (this->fixPoint != rhs.getRawBits())
        return true;
    else
        return false;
}
Fixed Fixed::operator+(const Fixed & rhs) const {
    Fixed sum;
    sum = Fixed(this->toFloat() + rhs.toFloat());
    return sum;
}
Fixed Fixed::operator-(const Fixed & rhs) const {
    Fixed subtraction;
    subtraction = Fixed(this->toFloat() - rhs.toFloat());
    return subtraction;
}
Fixed Fixed::operator*(const Fixed & rhs) const {
    Fixed multiplication;
    multiplication = Fixed(this->toFloat() * rhs.toFloat());
    return multiplication;
}
Fixed Fixed::operator/(const Fixed & rhs) const {
    Fixed divided;
    divided = Fixed(this->toFloat() / rhs.toFloat());
    return divided;
}
// Define prefix increment operator.
Fixed & Fixed::operator++() {
    this->fixPoint++;
    return *this;
}
// Define postfix increment operator.
Fixed Fixed::operator++(int) {
    Fixed tmp = *this;
    ++*this;
    return tmp;
}
// Define prefix decrement operator.
Fixed & Fixed::operator--() {
    this->fixPoint--;
    return *this;
}
// Define postfix increment operator.
Fixed Fixed::operator--(int) {
    Fixed tmp = *this;
    --*this;
    return tmp;
}
Fixed &Fixed::min(Fixed &x, Fixed &y) {
    return x > y ? y : x;
}
const Fixed &Fixed::min(const Fixed &x, const Fixed &y) {
    return x > y ? y : x;
}
Fixed &Fixed::max(Fixed &x, Fixed &y) {
    return x > y ? x : y;
}
const Fixed &Fixed::max(const Fixed &x, const Fixed &y) {
    return x > y ? x : y;
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