#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
    std::cout << "Default [WrongAnimal] constructor is called" << std::endl;
}
WrongAnimal::WrongAnimal(std::string type) : _type(type) {
    std::cout << "[WrongAnimal] constructor is called" << std::endl;
}
WrongAnimal::~WrongAnimal() {
    std::cout << "[WrongAnimal] destructor is called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &src) : _type(src._type) {
    std::cout << "Copy [WrongAnimal] constructor is called" << std::endl;
}
void WrongAnimal::makeSound() const {
    std::cout << this->getType() << " say Hi" << std::endl;
}
WrongAnimal & WrongAnimal::operator=(const WrongAnimal &src) {
    this->_type = src._type;
    return (*this);
}
std::string WrongAnimal::getType() const {
    return _type;
}

