#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    brain = new Brain();
    std::cout << "[Dog] constructor is called" << std::endl;
}

Dog::~Dog() {
    delete brain;
    std::cout << "[Dog] destructor is called" << std::endl;
}

Dog::Dog(const Dog &src) : brain(new Brain(*src.brain)) {
    *this = src;
    std::cout << "[Dog] copy constructor is called" << std::endl;
}

Dog &Dog::operator=(const Dog &src) {
    if (this->brain)
        delete this->brain;
    this->brain = new Brain(*src.brain);
    this->_type = src._type;
    return (*this);
}
void Dog::makeSound() const {
    std::cout << this->getType() << " say WOOF" << std::endl;
}

