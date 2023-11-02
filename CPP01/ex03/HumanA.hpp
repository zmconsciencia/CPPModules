#ifndef HUMANA_CPP
# define HUMANA_CPP

# include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon &arma;
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack();
    void setWeapon(Weapon &weapon);
};

#endif