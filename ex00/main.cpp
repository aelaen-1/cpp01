#include "Zombie.hpp"

int main()
{
    Zombie *heap_zombie = newZombie("Heapie");
    heap_zombie->announce();
    delete heap_zombie;
    randomChump("Stackie");
    return (0);
}