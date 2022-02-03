#include "AMateria.hpp"
AMateria::AMateria() : _type("unknown") {}
AMateria::~AMateria() {}
AMateria::AMateria(const std::string &type) : _type(type){}
AMateria::AMateria(const AMateria &src) : _type(src._type) {}
AMateria & AMateria::operator=(AMateria const &src) {
    this->_type = src._type;
    return (*this);
}
std::string const & AMateria::getType() const {
    return this->_type;
}
void AMateria::use(ICharacter& target) {
    (void)target;
    return;
}