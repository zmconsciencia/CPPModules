#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor was called." << std::endl;
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = "Mensagem do Luis";
    }
}

Brain::Brain(const Brain &object) {
    *this = object;
    std::cout << "Brain copy constructor was called." << std::endl;
}

Brain &Brain::operator=(const Brain &object) {
    std::cout << "Copy assignment operator was called." << std::endl;
    if (this != &object) {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = object.ideas[i];
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor was called." << std::endl;
}

void Brain::messages(int n) {
    if (n > 0) {
        for (int i = 0; i < n; i++) {
            std::cout << i << " " << this->ideas[i] << std::endl;
        }
    }
    else
        std::cerr << "Invalid parameter.";
}

void Brain::setIdeas(std::string idea, int n) {
    this->ideas[n] = idea;
}