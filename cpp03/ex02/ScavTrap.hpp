#pragma once
#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap {
public:
    ScavTrap();
    virtual ~ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap & src);
    ScavTrap & operator=(const ScavTrap & src);
    void guardGate();
};