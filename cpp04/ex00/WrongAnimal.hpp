#pragma once
#include <iostream>
class WrongAnimal {
protected:
    std::string _type;
public:
    std::string getType() const;
    WrongAnimal();
    WrongAnimal(std::string type);
    virtual ~WrongAnimal();
    WrongAnimal(const WrongAnimal &src);
    WrongAnimal & operator=(const WrongAnimal &src);
    void makeSound() const;
};