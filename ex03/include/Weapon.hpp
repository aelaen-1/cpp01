#ifndef WEAPON_HPP
 #define WEAPON_HPP

class Weapon
{
private:
    std::string type;
public:
    const std::string&   getType();
    void    setType(std::string newType);
}

#endif