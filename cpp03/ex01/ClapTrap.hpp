#pragma once
#include <iostream>

class ClapTrap {
protected:
    std::string _name;
    unsigned int _hitpoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;
public:
    ClapTrap();
    ClapTrap(std::string Name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage);
    virtual ~ClapTrap();
    ClapTrap(const ClapTrap & src);
    ClapTrap & operator=(const ClapTrap & src);
    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};