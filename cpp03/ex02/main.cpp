#include "FragTrap.hpp"
#include "ScavTrap.hpp"
int main() {
    FragTrap fragTrap("Tmiranda");
    ScavTrap scavTrap("Snanette");
    scavTrap.attack("gun");
    scavTrap.takeDamage(20);
    scavTrap.beRepaired(10);
    scavTrap.guardGate();

    fragTrap.attack("knife");
    fragTrap.takeDamage(10);
    fragTrap.beRepaired(5);
    fragTrap.highFivesGuys();
}