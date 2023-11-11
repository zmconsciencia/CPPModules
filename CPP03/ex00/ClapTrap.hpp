#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include "iostream"

class ClapTrap {
    private:
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

        std::string getName(void);
        void setDamage(unsigned int amount);
        int getDamage(void);

        void handleStatus(void);
};

#endif