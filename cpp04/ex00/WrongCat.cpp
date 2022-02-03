#include "WrongCat.hpp"
WrongCat::WrongCat(): WrongAnimal("WrongCat") {
    std::cout << "[WrongCat] constructor is called" << std::endl;
}
WrongCat::~WrongCat() {
    std::cout << "[WrongCat] destructor is called" << std::endl;
}
WrongCat::WrongCat(const WrongCat &src) {
    *this = src;
    std::cout << "[WrongCat] copy constructor is called" << std::endl;
}
WrongCat & WrongCat::operator=(const WrongCat &src) {
    this->_type = src._type;
    return (*this);
}
void WrongCat::makeSound() const {
    std::cout << "WrongCat say QUACK" << std::endl;
}
