#pragma once
#include <iostream>
class Fixed {
private:
    int fixPoint;
    static const int rawBits = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const int param);
    Fixed(const float param);
    Fixed(const Fixed & st);
    Fixed & operator=(const Fixed & rhs);
    bool operator>(const Fixed & rhs) const;
    bool operator<(const Fixed & rhs);
    bool operator>=(const Fixed & rhs);
    bool operator<=(const Fixed & rhs);
    bool operator==(const Fixed & rhs);
    bool operator!=(const Fixed & rhs);
    Fixed operator+(const Fixed & rhs) const;
    Fixed operator-(const Fixed & rhs) const;
    Fixed operator*(const Fixed & rhs) const;
    Fixed operator/(const Fixed & rhs) const;
    Fixed & operator++();
    Fixed operator++(int);
    Fixed & operator--();
    Fixed operator--(int);
    static Fixed &min(Fixed &x, Fixed &y);
    static const Fixed &min(const Fixed &x, const Fixed &y);
    static  Fixed &max(Fixed &x, Fixed &y);
    static const Fixed &max(const Fixed &x, const Fixed &y);
    void setRawBits( int const raw );
    int getRawBits( void ) const;
    float toFloat( void ) const;
    int toInt( void ) const;
};
std::ostream& operator<<(std::ostream &o, const Fixed& rhs);