#pragma once
#include <iostream>
#include <stdexcept>
template <typename T>
class Array {
private:
    T * _arr;
    unsigned int _len;
public:
    Array() : _arr(0), _len(0){}
    Array(unsigned int n) : _len(n) {
        _arr = new T[n];
    }
    Array(Array const &src) : _arr(src._arr), _len(src._len) {}
    Array & operator=(Array const &src) {
        this->_len = src._len;
        delete [] this->_arr;
        for (unsigned int i = 0; i < this->_len; i++) {
            this->_arr[i] = src._arr[i];
        }
        return *this;
    }
    T &operator[](unsigned int index) {
        if(index < 0 || index >= this->_len)
            throw std::out_of_range("error index");
        else
            return _arr[index];
    }
    unsigned int size() {
        return this->_len;
    }
};
