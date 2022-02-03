#include "Cat.hpp"
Cat::Cat(): Animal("Cat") {
    std::cout << "[Cat] constructor is called" << std::endl;
}
Cat::~Cat() {
    std::cout << "[Cat] destructor is called" << std::endl;
}
Cat::Cat(const Cat &src) {
    *this = src;
    std::cout << "[Cat] copy constructor is called" << std::endl;
}
Cat & Cat::operator=(const Cat &src) {
    this->_type = src._type;
    return (*this);
}
void Cat::makeSound() const {
    std::cout << "Cat say MEOW" << std::endl;
}