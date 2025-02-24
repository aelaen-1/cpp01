#include "include/Weapon.hpp"

Weapon::Weapon()
{

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