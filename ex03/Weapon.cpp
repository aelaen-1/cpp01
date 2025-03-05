#include "include/Weapon.hpp"

Weapon::Weapon()
: type("default weapon")
{
}

Weapon::Weapon(std::string  typeInit)
{
    this->type = typeInit;
}


const std::string& Weapon::getType() const
{
    return (this->type);
}

void    Weapon::setType(std::string newType)
{
    this->type = newType;
}