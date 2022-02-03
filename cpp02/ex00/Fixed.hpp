#pragma once
class Fixed {
private:
    int fixPoint;
    static const int rawBits = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed & st);
    Fixed & operator=(const Fixed & rhs);
    void setRawBits( int const raw );
    int getRawBits( void ) const;
};
