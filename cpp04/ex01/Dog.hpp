#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal {
private:
    Brain* brain;
public:
    Dog();
    virtual ~Dog();
    Dog(const Dog &src);
    Dog & operator=(const Dog &src);
    virtual void makeSound() const;
};