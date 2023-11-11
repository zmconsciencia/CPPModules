#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal(){
    this->setType("WrongCat");
    std::cout << "WrongCat default constructor was called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &object): WrongAnimal(object){
    *this = object;
    std::cout << "WrongCat copy constructor was called." << std::endl; 
}

WrongCat &WrongCat::operator=(const WrongCat &object) {
    std::cout << "WrongCat copy assignment operator was called." << std::endl; 
    if (this != &object) {
        this->type = object.type;
    }
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor was called." << std::endl;
}

std::string WrongCat::getType(void) const {
    return this->type;
}
