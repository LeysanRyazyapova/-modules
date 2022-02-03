#pragma once
#include <iostream>
#include <vector>
class Span {
private:
    std::vector<int> sp;
    unsigned int _n;
public:
    Span();
    Span(unsigned int N);
    ~Span();
    Span(Span const & src);
    Span & operator=(Span const &src);
    void addNumber(int num);
    void addNumber(std::vector<int>::iterator target1, std::vector<int>::iterator target2);
    long shortestSpan();
    long longestSpan();
    void printSpan();
};