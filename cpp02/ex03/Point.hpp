#pragma once
#include "Fixed.hpp"
#include <cmath>
class Point {
private:
    Fixed const _x;
    Fixed const _y;
public:
    Point();
    ~Point();
    Point(const Point & st);
    Point(float const x, float const y);
    Point & operator=(const Point &point);
    Fixed getX( void ) const;
    Fixed getY( void ) const;
};
bool bsp( Point const a, Point const b, Point const c, Point const point);