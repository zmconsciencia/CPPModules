#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include "iostream"

class ClapTrap {
    protected:
        std::string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int attackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &object);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap &object);

        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void setDamage(unsigned int amount);
        int getDamage(void);

        std::string getName(void);
        void setName(const std::string name);

        void handleStatus(void);
};

#endif