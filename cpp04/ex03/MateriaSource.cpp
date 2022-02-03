#include "MateriaSource.hpp"
MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++) {
        _m[i] = 0;
    }
}
MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; i++) {
        if(this->_m[i])
            delete this->_m[i];
    }
}
MateriaSource::MateriaSource(MateriaSource const &src) {
    *this = src;
}
MateriaSource & MateriaSource::operator=(MateriaSource const & src) {
    for (int i = 0; i < 4; i++) {
        if (this->_m[i])
            delete this->_m[i];
        if (src._m[i])
            this->_m[i] = src._m[i]->clone();
        else
            this->_m[i] = 0;
    }
    return *this;
}
void MateriaSource::learnMateria(AMateria* m) {
    for(int i = 0; i < 4; i++) {
        if(!(this->_m[i])) {
            this->_m[i] = m;
            break;
        }
    }
}
AMateria* MateriaSource::createMateria(std::string const & type) {
    for(int i = 0; i < 4; i++) {
        if (this->_m[i]) {
            if(this->_m[i]->getType() == type)
                return(this->_m[i]->clone());
        }
    }
    return (0);
}