#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include "iostream"

class AAnimal {
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(const AAnimal &object);
        AAnimal &operator=(const AAnimal &object);
        virtual ~AAnimal();
        
        virtual void makeSound(void) const = 0;
        void setType(std::string type);
        std::string getType(void) const;
};

#endif