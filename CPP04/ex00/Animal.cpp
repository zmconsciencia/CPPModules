#include "Animal.hpp"

Animal::Animal(): type("animal") {
    std::cout << "Animal default constructor was called." << std::endl;
}

Animal::Animal(const Animal &object): type("animal") {
    *this = object;
    std::cout << "Animal copy constructor was called." << std::endl;
}

Animal &Animal::operator=(const Animal &object) {
    if (this != &object) {
        this->type = object.type;
    }
    std::cout << "Copy assignment operator was called." << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor was called." << std::endl;
}