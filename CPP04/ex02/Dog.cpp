#include "Dog.hpp"

Dog::Dog(): AAnimal(){
    this->_Brain = new Brain();
    this->setType("Dog");
    std::cout << "Dog default constructor was called." << std::endl;
}

Dog::Dog(const Dog &object): AAnimal(object){
    this->_Brain = new Brain();
    *this = object;
    std::cout << "Dog copy constructor was called." << std::endl; 
}

Dog &Dog::operator=(const Dog &object) {
    std::cout << "Dog copy assignment operator was called." << std::endl; 
    if (this != &object) {
        this->type = object.type;
        *(this->_Brain) = *(object._Brain);
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destructor was called." << std::endl;
    delete this->_Brain;
}

void Dog::makeSound(void) const {
    std::cout << "Bark bark!" << std::endl;
}

void Dog::printIdeas(int n){
    _Brain->messages(n);
}

void Dog::setIdea(std::string idea, int n){
    _Brain->setIdeas(idea, n);
}