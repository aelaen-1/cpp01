#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << this->name;
    std::cout << "  BraiiiiiiinnnzzzZ..." << std::endl;
}