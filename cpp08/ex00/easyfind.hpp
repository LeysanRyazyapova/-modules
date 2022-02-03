#pragma once
#include <algorithm>
#include <vector>
#include <list>
#include <exception>
#include <iostream>
template <typename T>
typename T::iterator easyfind(T & first, int second) {
    typename T::iterator f = std::find(first.begin(), first.end(), second);
     if (f == first.end())
        throw std::exception();
    return f;
}