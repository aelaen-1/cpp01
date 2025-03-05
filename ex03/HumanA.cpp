#include "include/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
: _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}

std::string HumanA::_getName()
{
    return (this->_name);
}

void    HumanA::attack()
{
    std::cout << this->_name << " attacks with their "
    << this->_weapon.getType() << std::endl;
}