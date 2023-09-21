#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>

class Zombie
{
private:
    std::string name;
    std::string type;
public:
    Zombie();
    ~Zombie();
    void announce();
    void setName(std::string name);
    void setType(std::string type);
};

#endif