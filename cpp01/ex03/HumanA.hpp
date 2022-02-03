#pragma once
#include "Weapon.hpp"
#include <iostream>
class HumanA{
private:
    Weapon *_weapon;
    std::string _name;
public:
    HumanA(std::string name, class Weapon &type);
    ~HumanA();
    void attack();
};
