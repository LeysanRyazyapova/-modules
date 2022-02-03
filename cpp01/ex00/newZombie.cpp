#include "Zombie.hpp"
Zombie* newZombie(std::string name) {
    Zombie* newZom = new Zombie(name);
    newZom->announce();
    return newZom;
}

