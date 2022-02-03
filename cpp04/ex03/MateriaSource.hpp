#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
    AMateria* _m[4];
public:
    MateriaSource();
    virtual ~MateriaSource();
    MateriaSource(MateriaSource const &src);
    MateriaSource & operator=(MateriaSource const &src);

    virtual void learnMateria(AMateria* m);
    virtual AMateria* createMateria(std::string const & type);
};