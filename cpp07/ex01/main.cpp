#include "iter.hpp"
#include <iostream>
template <typename T>
void print(T &x) {
    std::cout << x << " ";
}
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    iter(arr1, 5, &print);
    std::cout << std::endl;
    char arr2[] = {'a', 'b', 'c', 'd'};
    iter(arr2, 4, &print);
}
