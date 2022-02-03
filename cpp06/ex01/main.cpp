#include <iostream>
#include "Data.hpp"
uintptr_t serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}
Data* deserialize(uintptr_t raw) {
    return reinterpret_cast<Data *>(raw);
}
int main() {
    Data * p = new Data();
    p->str = "some string";
    std::cout << "Data in structure before: " << p->str << std::endl;
    std::cout << p << std::endl;
    uintptr_t r;
    r = serialize(p);
    std::cout << r << std::endl;
    Data * d = deserialize(r);
    std::cout << "Data in structure after: " << d->str << std::endl;
    std::cout << d << std::endl;

    return 0;
}