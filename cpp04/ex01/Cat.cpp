#include "Cat.hpp"
Cat::Cat(): Animal("Cat") {
    brain = new Brain();
    std::cout << "[Cat] constructor is called" << std::endl;
}
Cat::~Cat() {
    delete brain;
    std::cout << "[Cat] destructor is called" << std::endl;
}
Cat::Cat(const Cat &src) : brain(new Brain(*src.brain)) {
    *this = src;
    std::cout << "[Cat] copy constructor is called" << std::endl;
}
Cat & Cat::operator=(const Cat &src) {
    if (this->brain)
        delete this->brain;
    this->brain = new Brain(*src.brain);
    this->_type = src._type;
    return (*this);
}
void Cat::makeSound() const {
    std::cout << "Cat say MEOW" << std::endl;
}