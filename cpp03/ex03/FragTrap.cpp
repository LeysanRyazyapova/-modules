#include "FragTrap.hpp"
FragTrap::FragTrap() : ClapTrap("unknown", 100, 100, 30) {
    std::cout << "Constructor [FragTrap] is called" << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name, 100,  100, 30) {
    std::cout  << "Constructor [FragTrap] is called" << std::endl;
}
FragTrap::~FragTrap() {
    std::cout << "Destructor [FragTrap] is called" << std::endl;
}
FragTrap::FragTrap(const FragTrap & src) {
    *this = src;
    std::cout << "Copy constructor of [FragTrap] is called" << std::endl;
}
FragTrap & FragTrap::operator=(const FragTrap & src){
    this->_name = src._name;
    this->_hitpoints = src._hitpoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    return *this;
}
void FragTrap::highFivesGuys(void) {
    std::cout << "High Fives Guys" << std::endl;
}