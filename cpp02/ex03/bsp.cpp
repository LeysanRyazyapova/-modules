#include "Point.hpp"
#include <cmath>
float pointPosition(Point const a, Point const b, Point const point) {
    Fixed tmp;
    tmp = (point.getX() - a.getX()) * (b.getY() - a.getY()) - (point.getY() - a.getY()) * (b.getX() - a.getX());

    return tmp.toFloat();
}

bool similarSide(Point const a, Point const b, Point const c, Point const point) {
    return pointPosition(a, b, c) * pointPosition(a, b, point) > 0;
}
bool bsp( Point const a, Point const b, Point const c, Point const point) {
    return similarSide(a, b, c, point) && similarSide(b, c, a, point) && similarSide(c, a, b, point);
}
