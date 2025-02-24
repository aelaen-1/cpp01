#include "include/Weapon.hpp"

Weapon::Weapon()
{
    this->type = "default";
}

Weapon::~Weapon()
{
    
}

const std::string& Weapon::getType()
{
    return (this->type);
}

void    Weapon::setType(std::string newType)
{
    this->type = newType;
}