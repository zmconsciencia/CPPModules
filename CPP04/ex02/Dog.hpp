#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
        private:
        Brain *_Brain;
    public:
        Dog();
        Dog(const Dog &object);
        Dog &operator=(const Dog &object);
        ~Dog();
        std::string getType(void) const ;
        void makeSound(void) const ;
        void printIdeas(int n) ;
        void setIdea(std::string idea, int n);
};

#endif