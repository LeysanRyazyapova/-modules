#pragma once
#include <iostream>
class Animal {
protected:
    std::string _type;
public:
    std::string getType() const;
    Animal();
    Animal(std::string type);
    virtual ~Animal();
    Animal(const Animal &src);
    Animal & operator=(const Animal &src);
    virtual void makeSound() const = 0;
};