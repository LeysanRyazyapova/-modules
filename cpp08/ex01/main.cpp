#include "span.hpp"
#include <iostream>
int main() {
    Span sp = Span(5);

    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    Span sp2 = Span(1);
    try {
        sp2.addNumber(2);
        sp2.addNumber(3);
    } catch (std::out_of_range &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        std::cout << sp2.longestSpan() << std::endl;
    } catch (std::out_of_range &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        std::cout << sp2.shortestSpan() << std::endl;
    } catch (std::out_of_range &e) {
        std::cout << e.what() << std::endl;
    }
    std::vector<int> arr(10000, 12);
    Span sp3 = Span(10000);
    std::vector<int>::iterator it1 = arr.begin();
    std::vector<int>::iterator it2 = arr.end();
    sp3.addNumber(it1, it2);
    sp3.printSpan();
}