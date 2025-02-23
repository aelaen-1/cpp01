#include "Zombie.hpp"

int main()
{
    Zombie *horde = zombieHorde(5, "stacker");

    delete[] horde;
    return (0);
}