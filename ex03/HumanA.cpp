#include "include/HumanA.hpp"

HumanA::HumanA()
{
    this->name = "default";
    this->weapon.setType("default");
}

HumanA::~HumanA()
{

}

void    HumanA::setName(std::string n)
{
    this->name = n;
}

std::string    HumanA::getName()
{
    return (this->name);
}

void    HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

Weapon& HumanA::getWeapon()
{
    return (this->weapon);
}