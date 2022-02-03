#pragma once
#include <iostream>
#include "ClapTrap.hpp"
class FragTrap : public ClapTrap {
public:
    FragTrap();
    virtual ~FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap & src);
    FragTrap & operator=(const FragTrap & src);
    void highFivesGuys(void);
};