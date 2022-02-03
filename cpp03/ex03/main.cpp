#include "DiamondTrap.hpp"
int main() {
    DiamondTrap firstDiamond("Tmiranda");
    DiamondTrap secondDiamond;
    secondDiamond = firstDiamond;
    firstDiamond.attack("club");
    secondDiamond.whoAmI();
    ClapTrap firstClap("Mdude");
    firstClap.attack("axe");
    firstClap.attack("gun");
    firstClap.attack("qqq");
    firstClap.takeDamage(150);
    firstClap.beRepaired(1);
}