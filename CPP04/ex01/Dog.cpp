#include "Dog.hpp"

Dog::Dog(): Animal(){
    this->setType("Dog");
    std::cout << "Dog default constructor was called." << std::endl;
}

Dog::Dog(const Dog &object): Animal(object){
    *this = object;
    std::cout << "Dog copy constructor was called." << std::endl; 
}

Dog &Dog::operator=(const Dog &object) {
    std::cout << "Dog copy assignment operator was called." << std::endl; 
    if (this != &object) {
        this->type = object.type;
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destructor was called." << std::endl;
}

std::string Dog::getType(void) const {
    return this->type;
}

void Dog::makeSound(void) const {
    std::cout << "Bark bark!" << std::endl;
}