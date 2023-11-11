#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "iostream"

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &object);
        Animal &operator=(const Animal &object);
        virtual ~Animal();
        
        void setType(std::string type);
        virtual void makeSound(void) const;
        virtual std::string getType(void) const;
        virtual void printIdeas(int n) const;
};

#endif