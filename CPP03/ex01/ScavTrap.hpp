#ifndef SCAV_TRAP
# define SCAV_TRAP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(std::string name);
        ~ScavTrap();
};

#endif