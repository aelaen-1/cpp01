#include "include/HumanA.hpp"

HumanA::HumanA()
{

}

HumanA::~HumanA()
{

}

void    HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon->type << std::endl;
}