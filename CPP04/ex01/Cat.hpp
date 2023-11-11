#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
    private:
        Brain *_Brain;
    public:
        Cat();
        Cat(const Cat &object);
        Cat &operator=(const Cat &object);
        ~Cat();
        std::string getType(void) const ;
        void makeSound(void) const ;
        void printIdeas(int n) const;
};

#endif