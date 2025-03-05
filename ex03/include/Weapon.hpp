#ifndef WEAPON_HPP
 #define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
public:
    Weapon();
    Weapon(std::string typeInit);
    const std::string&   getType() const;
    void    setType(std::string newType);

private:
    std::string type;
};

#endif