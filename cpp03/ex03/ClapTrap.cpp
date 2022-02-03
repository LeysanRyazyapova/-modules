#include "ClapTrap.hpp"
ClapTrap::ClapTrap(): _name("unknown"), _hitpoints(10), _energyPoints(10), _attackDamage(0){
    std::cout << "Constructor [ClapTrap] is called" << std::endl;
}
ClapTrap::ClapTrap(std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage):
_name(name), _hitpoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage){
    std::cout << "Constructor [ClapTrap] is called" << std::endl;
}
ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(100), _energyPoints(50), _attackDamage(30) {
    std::cout << "Constructor [ClapTrap] is called" << std::endl;
}
ClapTrap::~ClapTrap() {
    std::cout << "Destructor [ClapTrap] is called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap & src): _name(src._name), _hitpoints(src._hitpoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage) {
    std::cout << "Copy constructor of [ClapTrap] is called" << std::endl;
}
ClapTrap & ClapTrap::operator=(const ClapTrap &src) {
    this->_name = src._name;
    this->_hitpoints = src._hitpoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage= src._attackDamage;
    return *this;
}
void ClapTrap::attack(const std::string &target) {
    std::cout << "ClapTrap <" << this->_name << "> attack <";
    std::cout << target << ">, causing <" << _attackDamage << "> points of damage!";
    std::cout << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount) {
    if (amount > this->_hitpoints)
        this->_hitpoints = 0;
    else
        this->_hitpoints = this->_hitpoints - amount;
    std::cout << "ClapTrap <" << this->_name << "> take damage <" << amount;
    std::cout << "> points and have <" << this->_hitpoints << "> hit points!" << std::endl;

}
void ClapTrap::beRepaired(unsigned int amount) {
    this->_hitpoints = this->_hitpoints + amount;
    std::cout << "ClapTrap <" << this->_name << "> be repaired to <" << amount;
    std::cout << "> points and have <" << this->_hitpoints << "> hit points!" << std::endl;
}