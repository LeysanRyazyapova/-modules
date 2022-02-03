#include "ScavTrap.hpp"
ScavTrap::ScavTrap() : ClapTrap("unknown", 100, 50, 20) {
    std::cout << "Constructor [ScavTrap] is called" << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100,  50, 20) {
    std::cout  << "Constructor [ScavTrap] is called" << std::endl;
}
ScavTrap::~ScavTrap() {
    std::cout << "Destructor [ScavTrap] is called" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap & src) {
    *this = src;
    std::cout << "Copy constructor of [ScavTrap] is called" << std::endl;
}
ScavTrap & ScavTrap::operator=(const ScavTrap & src){
    this->_name = src._name;
    this->_hitpoints = src._hitpoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    return *this;
}
void ScavTrap::guardGate() {
    std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}
