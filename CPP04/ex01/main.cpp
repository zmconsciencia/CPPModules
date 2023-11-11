#include "Cat.hpp"

int main() {
    const Animal *x = new Cat();

    x->makeSound();
    x->printIdeas(3);

    delete x;
}