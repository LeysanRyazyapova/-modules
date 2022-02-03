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
    void setRawBits( int const raw );
    int getRawBits( void ) const;
    float toFloat( void ) const;
    int toInt( void ) const;
};
std::ostream& operator<<(std::ostream &o, const Fixed& rhs);