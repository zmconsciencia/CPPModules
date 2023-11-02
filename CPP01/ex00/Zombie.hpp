#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include "iostream"
# include "string"

class Zombie {
    private:
        std::string name;
    public:
        void announce ( void );
        Zombie(std::string name);
        ~Zombie();
};

#endif