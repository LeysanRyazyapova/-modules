#include "ScavTrap.hpp"
int main() {
    ScavTrap scavTrap("Tmiranda");
    scavTrap.attack("knife");
    scavTrap.takeDamage(10);
    scavTrap.beRepaired(5);
    scavTrap.guardGate();
//    ClapTrap claptrap("Fcody");
//    claptrap.guardGate();
}