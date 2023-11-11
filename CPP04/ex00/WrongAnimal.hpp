#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "iostream"

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &object);
        WrongAnimal &operator=(const WrongAnimal &object);
        virtual ~WrongAnimal();

        void setType(std::string type);
        void makeSound(void) const;
        virtual std::string getType(void) const;
};

#endif