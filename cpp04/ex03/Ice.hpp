#pragma once
#include "AMateria.hpp"
class Ice: public AMateria {
public:
    Ice();
    virtual ~Ice();
    Ice(Ice const & src);
    Ice& operator=(Ice const &src);

    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};
