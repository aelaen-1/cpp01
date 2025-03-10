#ifndef ZOMBIE_HPP
 #define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie();
    ~Zombie();
    void    _setName(std::string n);
    void    announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif
