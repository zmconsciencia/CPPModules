#include "Cat.hpp"

Cat::Cat(): AAnimal(){
    this->_Brain = new Brain();
    this->setType("Cat");
    std::cout << "Cat default constructor was called." << std::endl;
}

Cat::Cat(const Cat &object): AAnimal(object){
    this->_Brain = new Brain();
    *this = object;
    std::cout << "Cat copy constructor was called." << std::endl; 
}

Cat &Cat::operator=(const Cat &object) {
    std::cout << "Cat copy assignment operator was called." << std::endl; 
    if (this != &object) {
        this->type = object.type;
        *(this->_Brain) = *(object._Brain);
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor was called." << std::endl;
    delete this->_Brain;
}

void Cat::makeSound(void) const {
    std::cout << "Meow!" << std::endl;
}

void Cat::printIdeas(int n){
    _Brain->messages(n);
}

void Cat::setIdea(std::string idea, int n){
    _Brain->setIdeas(idea, n);
}