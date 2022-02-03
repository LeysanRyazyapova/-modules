#pragma once
#include <stack>
#include <iterator>
template<typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack() {}
    MutantStack(const MutantStack<T>& src) { *this = src; }
    MutantStack<T>& operator=(const MutantStack<T>& rhs)
    {
        this->c = rhs.c;
        return *this;
    }
    ~MutantStack() {}

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

    reverse_iterator rbegin() { return this->c.rbegin();}
    reverse_iterator rend() { return this->c.rend();}

    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
};