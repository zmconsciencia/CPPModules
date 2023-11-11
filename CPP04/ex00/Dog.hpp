#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog();
        Dog(const Dog &object);
        Dog &operator=(const Dog &object);
        ~Dog();
        std::string getType(void) const ;
        void makeSound(void) const ;
};

#endif