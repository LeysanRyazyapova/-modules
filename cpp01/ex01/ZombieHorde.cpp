#include "Zombie.hpp"
Zombie* zombieHorde(int N, std::string name) {
    Zombie* newZomb = new Zombie[N];
    for (int i = 0; i < N; i++) {
        newZomb[i].setName(name);
        newZomb[i].announce();
    }
    return newZomb;
}

