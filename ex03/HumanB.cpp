#include "include/HumanB.hpp"

HumanB::HumanB(std::string name)
: _name(name), _weapon(nullptr)
{
}

HumanB::~HumanB()
{
}

void    HumanB::setWeapon(Weapon& weapon) // ref de l'arme
{
    this->_weapon = &weapon; // Stocke son adresse
}

void    HumanB::attack()
{
    if (this->_weapon)
    {
        std::cout << this->_name << " attacks with their " 
        << this->_weapon->getType() << std::endl;
    }
    else
        std::cout << this->_name << " has no weapon. Set it first.\n";
}