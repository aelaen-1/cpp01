#include "include/HumanA.hpp"

int main()
{
    HumanA human;

    human.getWeapon().setType("machette");
    human.setName("stacker");
    human.attack();
    return(0);
}