#include <iostream>
#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap("Susan");
    claptrap.attack("revolver");
    claptrap.takeDamage(5);
    claptrap.beRepaired(2);
    claptrap.takeDamage(10);
    return 0;
}
