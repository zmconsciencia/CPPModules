#include "Dog.hpp"

int main() {
    const Animal *j = new Dog();

    std::cout << j->getType() << " " << std::endl;
    j->makeSound();

    delete j;
}