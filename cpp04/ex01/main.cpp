#include "Dog.hpp"
#include "Cat.hpp"
int main() {
    const Animal* meta[10];
    for (int i = 0; i < 5; i++) {
        meta[i] = new Dog();
    }
    for (int i = 5; i < 10; i++) {
        meta[i] = new Cat();
    }
    for (int i = 0; i < 10; i++) {
        meta[i]->makeSound();
        delete meta[i];
    }
}