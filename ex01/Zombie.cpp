#include "Zombie.hpp"


Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << this->name << " has been destroyed." << std::endl;
}

void    Zombie::setName(std::string n)
{
    this->name = n;
}

void    Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}