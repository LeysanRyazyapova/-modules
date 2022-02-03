#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
class DiamondTrap: public ScavTrap, public FragTrap {
private:
    std::string _name;
public:
    DiamondTrap();
    virtual ~DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &src);
    DiamondTrap & operator=(const DiamondTrap &src);
    void attack(std::string const &target);
    void whoAmI();
};