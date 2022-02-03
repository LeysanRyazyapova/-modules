#include "Zombie.hpp"
void randomChump(std::string name) {
    Zombie newZom = Zombie(name);
    newZom.announce();
}

