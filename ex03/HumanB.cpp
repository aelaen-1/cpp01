#include "include/HumanB.hpp"

HumanB::HumanB()
{

}

HumanB::~HumanB()
{

}

void    HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon->type << std::endl;
}