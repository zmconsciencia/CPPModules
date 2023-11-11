#include "Cat.hpp"

int main() {
    const Animal *x = new Cat();
    // const Cat *y = new Cat();
    // Cat cat = *y;

    Cat basic;
    {
        Cat tmp(basic);
    }

    x->makeSound();
    x->printIdeas(3);

    std::cout << std::endl;

    // cat.printIdeas(4);

    // delete y;
    delete x;
}