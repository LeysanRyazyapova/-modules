#include "Point.hpp"
Point::Point( void ): _x(0), _y(0) {
    return;
}
Point::~Point() {
}
Point::Point(const Point &st) : _x(st.getX()), _y(st.getY()){
    *this = st;
}
Point::Point(const float x, const float y) : _x(x), _y(y) {
    return;
}
Point & Point::operator=(const Point &point){
    if (this == &point)
        return *this;
    return *this;
}
Fixed Point::getX( void ) const{
    return this->_x;
}
Fixed Point::getY( void ) const{
    return  this->_y;
}