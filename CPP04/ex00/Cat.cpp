#include "Cat.hpp"

Cat::Cat(): Animal(){
    this->setType("Cat");
    std::cout << "Cat default constructor was called." << std::endl;
}

Cat::Cat(const Cat &object): Animal(object){
    *this = object;
    std::cout << "Cat copy constructor was called." << std::endl; 
}

Cat &Cat::operator=(const Cat &object) {
    std::cout << "Cat copy assignment operator was called." << std::endl; 
    if (this != &object) {
        this->type = object.type;
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor was called." << std::endl;
}

std::string Cat::getType(void) const {
    return this->type;
}

void Cat::makeSound(void) const {
    std::cout << "Meow!" << std::endl;
}