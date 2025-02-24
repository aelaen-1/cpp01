#include "include/HumanA.hpp"

int main()
{
    HumanA human;
    Weapon  weapon;

    weapon.setType("machette");
    human.weapon = weapon;
    human.setName("stacker");
    human.attack();
    return(0);
}