#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* horde = new Zombie [N];
    // pas pu le faire avec le constructeur Zombie(): name(name){}
    // on doit appeler le constructeur par defaut et ensuite appeler les methodes pour initialiser notre objet
    for (int i = 0; i < N; ++i) {
        horde[i].setName(name);
        horde[i].announce();
    }
    return (horde);
}