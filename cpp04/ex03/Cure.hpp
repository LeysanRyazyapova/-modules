#pragma once
#include "AMateria.hpp"
class Cure: public AMateria {
public:
    Cure();
    virtual ~Cure();
    Cure(Cure const & src);
    Cure& operator=(Cure const &src);

    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};