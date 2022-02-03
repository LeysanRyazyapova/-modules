#include "Weapon.hpp"
Weapon::Weapon(std::string type) {
    _type = type;
}
Weapon::Weapon() {}
Weapon::~Weapon() {}
void Weapon::setType(std::string type) {
    this->_type = type;
}
std::string const & Weapon::getType() {
    std::string& str = this->_type;
    return str;
}

