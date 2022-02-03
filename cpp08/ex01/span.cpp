#include "span.hpp"
Span::Span(){}
Span::~Span(){
    if (!this->sp.empty())
        this->sp.clear();
}
Span::Span(unsigned int N) : _n(N) {}
Span::Span(Span const & src) : sp(src.sp), _n(src._n) {}
Span & Span::operator=(Span const & src) {
    this->sp = src.sp;
    this->_n = src._n;
    return *this;
}
void Span::addNumber(int num) {
    if (this->sp.size() < this->_n) {
        this->sp.push_back(num);
    }
    else
        throw std::out_of_range("out of range");
}
void Span::addNumber(std::vector<int>::iterator target1, std::vector<int>::iterator target2) {
    for (std::vector<int>::iterator it = target1; it != target2; it++) {
        if (this->sp.size() >= this->_n) {
            throw std::out_of_range("out of range");
        }
        else {
            this->sp.push_back(*it);
        }
    }
}
long Span::shortestSpan() {
    long min = 0;
    if (this->sp.size() < 2)
        throw std::out_of_range("to low elements");
    else {
        std::sort(this->sp.begin(), this->sp.end());
        min = this->sp.at(1) - this->sp.at(0);
        for(std::vector<int>::iterator it = this->sp.begin(); it !=this->sp.end(); it++) {
            if (((*(it + 1)) - (*it)) < min)
                min = ((*(it + 1)) - (*it));
        }
    }
    return min;
}
long Span::longestSpan() {
    long max = 0;
    if (this->sp.size() < 2)
        throw std::out_of_range("to low elements");
    else {
        std::sort(this->sp.begin(), this->sp.end());
        max = this->sp.at(this->sp.size() - 1) - this->sp.at(0);
    }
    return max;
}
void Span::printSpan() {
    for(std::vector<int>::iterator it = this->sp.begin(); it !=this->sp.end(); it++) {
        std::cout << *it << std::endl;
    }
}
