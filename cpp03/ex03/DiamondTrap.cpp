#include "DiamondTrap.hpp"
DiamondTrap::DiamondTrap() : ClapTrap("unknown _clap_name"), ScavTrap(), FragTrap(){
    this->_name = "unknown";
    this->_hitpoints = FragTrap::_hitpoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "Default [DiamondTrap] constructor is called" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
    this->_name = name;
    this->_hitpoints = FragTrap::_hitpoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "Constructor [DiamondTrap] constructor is called" << std::endl;
}
DiamondTrap::~DiamondTrap() {
    std::cout << "Destructor [DiamondTrap] destructor is called" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap &src) {
    *this = src;
}
DiamondTrap & DiamondTrap::operator=(const DiamondTrap &src) {
    FragTrap::operator=(src);
    ScavTrap::operator=(src);
    this->_name = src._name;
    return (*this);
}
void DiamondTrap::attack(std::string const &target) {
    ScavTrap::attack(target);
}
void DiamondTrap::whoAmI() {
    std::cout << "Who am I" << std::endl;
    std::cout << "Name: " << this->_name << std::endl;
    std::cout << "ClapTrap Name " << ClapTrap::_name << std::endl;
}