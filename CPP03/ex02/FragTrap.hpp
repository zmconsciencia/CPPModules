#ifndef SCAV_TRAP
# define SCAV_TRAP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap();
        FragTrap(const FragTrap &object);
        FragTrap(std::string name);
        FragTrap &operator=(const FragTrap &object);
        ~FragTrap();

        void attack(const std::string &target);
        void highFivesGuys(void);
};

#endif