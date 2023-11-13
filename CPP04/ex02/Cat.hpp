#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal {
    private:
        Brain *_Brain;
    public:
        Cat();
        Cat(const Cat &object);
        Cat &operator=(const Cat &object);
        ~Cat();
        void makeSound(void) const ;
        void printIdeas(int n);
        void setIdea(std::string idea, int n);
};

#endif