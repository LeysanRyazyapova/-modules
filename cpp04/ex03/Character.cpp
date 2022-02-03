#include "Character.hpp"
Character::Character(){}
Character::~Character(){
    for(int i = 0; i < 4; i++) {
        if(this->_materia[i])
            delete this->_materia[i];
    }
}
Character::Character(std::string name) : _name(name) {
    for(int i = 0; i < 4; i++) {
        this->_materia[i] = 0;
    }
}
Character::Character(Character const &src) : _name(src._name){
    for(int i = 0; i < 4; i++) {
        this->_materia[i] = 0;
    }
    *this = src;
}

Character & Character::operator=(Character const & src) {
    for (int i = 0; i < 4; i++) {
        if (this->_materia[i])
            delete this->_materia[i];
        if (src._materia[i])
            this->_materia[i] = src._materia[i]->clone();
        else
            this->_materia[i] = 0;
    }
    this->_name = src._name;
    return *this;
}
std::string const & Character::getName() const {
    return this->_name;
}
void Character::equip(AMateria* m) {
    for(int i = 0; i < 4; i++) {
        if (!this->_materia[i]) {
            this->_materia[i] = m;
            break;
        }
    }
}
void Character::unequip(int idx) {
    this->_materia[idx] = 0;
}
void Character::use(int idx, ICharacter& target) {
    _materia[idx]->use(target);
}
