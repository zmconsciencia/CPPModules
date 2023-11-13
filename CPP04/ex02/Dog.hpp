#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {
        private:
        Brain *_Brain;
    public:
        Dog();
        Dog(const Dog &object);
        Dog &operator=(const Dog &object);
        ~Dog();
        void makeSound(void) const ;
        void printIdeas(int n) ;
        void setIdea(std::string idea, int n);
};

#endif