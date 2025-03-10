#include "include/HumanA.hpp"
#include "include/HumanB.hpp"


// par rapport au pointeur, la reference doit etre initialisée obligatoirement
// car on ne peut avoir de ref sur un objet nul. Je dois donc ici initialiser
// une weapon alors qu'il se peut qu'il n'y en ait pas, voir vidéo de l'intra
int main()
{
    {
        Weapon  club = Weapon("crude spiked club");

        HumanA  bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon  club = Weapon("crude spiked club");

        HumanB  jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return (0);
}