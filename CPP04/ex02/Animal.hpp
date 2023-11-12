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
        
        virtual void makeSound(void) const;
        void setType(std::string type);
        std::string getType(void) const;
};

#endif