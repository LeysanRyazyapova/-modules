#include "Point.hpp"
int main() {
    Point a(1.0f, 2.0f);
    Point b(3.0f, 5.0f);
    Point c(5.0f, 1.0f);
    Point d(3.0f, 3.0f);
    Point e(0.0f, 0.0f);

    if (bsp(a, b, c, d))
        std::cout << "the point enters the triangle"<< std::endl;
    else
        std::cout << "the point is not included in the triangle"<< std::endl;
    if (bsp(a, b, c, e))
        std::cout << "point enters the triangle"<< std::endl;
    else
        std::cout << "the point is not included in the triangle"<< std::endl;

    Point a1(2.0f, 2.0f);
    Point b1(6.0f, 5.0f);
    Point c1(8.0f, 1.0f);
    Point d1(5.2f, 2.8f);
    Point e1(9.0f, 5.0f);

    if (bsp(a1, b1, c1, d1))
        std::cout << "the point enters the triangle"<< std::endl;
    else
        std::cout << "the point is not included in the triangle"<< std::endl;
    if ( bsp(a1, b1, c1, e1) )
        std::cout << "point enters the triangle"<< std::endl;
    else
        std::cout << "the point is not included in the triangle"<< std::endl;
}

