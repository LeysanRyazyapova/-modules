#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"
class Character: public ICharacter {
private:
    AMateria* _materia[4];
    std::string _name;
public:
    Character();
    virtual ~Character();
    Character(std::string name);
    Character(Character const &src);
    Character & operator=(Character const &src);

    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};