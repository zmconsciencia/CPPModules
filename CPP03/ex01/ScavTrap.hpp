#ifndef SCAV_TRAP
# define SCAV_TRAP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(const ScavTrap &object);
        ScavTrap(std::string name);
        ScavTrap &operator=(const ScavTrap &object);
        ~ScavTrap();

        void attack(const std::string &target);
        void guardGate(void);
};

#endif