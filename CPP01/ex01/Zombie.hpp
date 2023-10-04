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
public:
    Zombie(void);
    Zombie(std::string name);
    ~Zombie(void);
    void announce();

    void setName(std::string name);
};

#endif