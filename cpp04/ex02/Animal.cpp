#include "Animal.hpp"
Animal::Animal() : _type("animal") {
    std::cout << "Default [Animal] constructor is called" << std::endl;
}
Animal::Animal(std::string type) : _type(type) {
    std::cout << "[Animal] constructor is called" << std::endl;
}
Animal::~Animal() {
    std::cout << "[Animal] destructor is called" << std::endl;
}
Animal::Animal(const Animal &src) : _type(src._type) {
    std::cout << "Copy [Animal] constructor is called" << std::endl;
}
Animal & Animal::operator=(const Animal &src) {
    this->_type = src._type;
    return (*this);
}
std::string Animal::getType() const {
    return _type;
}