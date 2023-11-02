#ifndef HUMANB_CPP
# define HUMANB_CPP

# include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon *arma;
public:
    HumanB(std::string name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon &weapon);
};

#endif