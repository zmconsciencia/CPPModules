#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat();
        Cat(const Cat &object);
        Cat &operator=(const Cat &object);
        ~Cat();
        std::string getType(void) const ;
        void makeSound(void) const ;
};

#endif