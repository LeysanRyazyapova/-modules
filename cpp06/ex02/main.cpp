#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include<ctime>
#include <iostream>
void identify(Base* p) {
    A *a = dynamic_cast<A*>(p);
    B *b = dynamic_cast<B*>(p);
    C *c = dynamic_cast<C*>(p);
    if (a)
        std::cout << "A" << std::endl;
    if (b)
        std::cout << "B" << std::endl;
    if(c)
        std::cout << "C" << std::endl;
}
void identify(Base& p) {
    try {
        A &a = dynamic_cast<A &>(p);
        std::cout << "A reference" << std::endl;
        (void)a;
    } catch (std::bad_cast &bc) {
        try {
            B &b = dynamic_cast<B &>(p);
            std::cout << "B reference" << std::endl;
            (void)b;
        } catch (std::bad_cast &bc) {
            try {
                C &c = dynamic_cast<C &>(p);
                std::cout << "C reference" << std::endl;
                (void)c;
            } catch (std::bad_cast &bc) {}
        }
    }
}
Base * generate(void) {
    int i = rand() % 3;
    if(i == 0) {
        Base *b = new A();
        std::cout << "A is generate" << std::endl;
        return b;
    }
    if (i == 1) {
        Base *b = new B();
        std::cout << "B is generate" << std::endl;
        return b;
    }
    if (i == 2) {
        Base *b = new C();
        std::cout << "C is generate" << std::endl;
        return b;
    }
    return 0;
}
int main() {
    for(int i = 0; i < 10; i++) {
        Base *b = generate();
        identify(b);
        identify(*b);
    }
    return 0;
}

