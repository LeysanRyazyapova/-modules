#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    std::cout << "[Dog] constructor is called" << std::endl;
}

Dog::~Dog() {
    std::cout << "[Dog] destructor is called" << std::endl;
}

Dog::Dog(const Dog &src) {
    *this = src;
    std::cout << "[Dog] copy constructor is called" << std::endl;
}

Dog &Dog::operator=(const Dog &src) {
    this->_type = src._type;
    return (*this);
}
void Dog::makeSound() const {
    std::cout << this->getType() << " say WOOF" << std::endl;
}

