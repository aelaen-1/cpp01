#ifndef HUMANA_HPP
 #define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon  weapon;
public:
    HumanA();
    ~HumanA();
    void    setName(std::string n);
    std::string    getName();
    void    attack();
    Weapon& getWeapon();
};

#endif