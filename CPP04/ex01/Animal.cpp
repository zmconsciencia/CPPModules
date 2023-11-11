#include "Animal.hpp"

Animal::Animal(): type("animal") {
    std::cout << "Animal default constructor was called." << std::endl;
}

Animal::Animal(const Animal &object): type("animal") {
    *this = object;
    std::cout << "Animal copy constructor was called." << std::endl;
}

Animal &Animal::operator=(const Animal &object) {
    std::cout << "Copy assignment operator was called." << std::endl;
    if (this != &object) {
        this->type = object.type;
    }
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor was called." << std::endl;
}

void Animal::setType(std::string _type) {
    this->type = _type;
}

std::string Animal::getType(void) const{
    return this->type;
}

void Animal::makeSound(void) const{
    std::cout << "Weird undefined noise." << std::endl;
}

void Animal::printIdeas(int n) const{
    (void)n;
    std::cout << "Animals have no ideas." << std::endl;
}