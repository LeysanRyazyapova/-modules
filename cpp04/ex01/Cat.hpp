#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal {
private:
    Brain* brain;
public:
    Cat();
    virtual ~Cat();
    Cat(const Cat &src);
    Cat & operator=(const Cat &src);
    virtual void makeSound() const;
};