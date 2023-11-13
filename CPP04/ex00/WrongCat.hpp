#ifndef    WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        WrongCat(const WrongCat &object);
        WrongCat &operator=(const WrongCat &object);
        ~WrongCat();
};

#endif