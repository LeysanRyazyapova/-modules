#include "Zombie.hpp"
int main() {
    Zombie *marry = zombieHorde(3, "Marry");
    delete [] marry;
}