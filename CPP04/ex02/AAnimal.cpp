#include "AAnimal.hpp"

AAnimal::AAnimal(): type("AAnimal") {
    std::cout << "AAnimal default constructor was called." << std::endl;
}

AAnimal::AAnimal(const AAnimal &object): type("AAnimal") {
    *this = object;
    std::cout << "AAnimal copy constructor was called." << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &object) {
    std::cout << "Copy assignment operator was called." << std::endl;
    if (this != &object) {
        this->type = object.type;
    }
    return *this;
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal destructor was called." << std::endl;
}

void AAnimal::setType(std::string _type) {
    this->type = _type;
}

std::string AAnimal::getType(void) const{
    return this->type;
}

void AAnimal::makeSound(void) const{
    std::cout << "Weird undefined noise." << std::endl;
}