#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal") {
    std::cout << "WrongAnimal default constructor was called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &object): type("WrongAnimal") {
    *this = object;
    std::cout << "WrongAnimal copy constructor was called." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &object) {
    std::cout << "Copy assignment operator was called." << std::endl;
    if (this != &object) {
        this->type = object.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor was called." << std::endl;
}

void WrongAnimal::setType(std::string _type) {
    this->type = _type;
}

std::string WrongAnimal::getType(void) const{
    return this->type;
}

void WrongAnimal::makeSound(void) const{
    std::cout << "WrongAnimal weird undefined noise." << std::endl;
}