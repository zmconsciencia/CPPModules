#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    const WrongAnimal *cat = new WrongCat();

    std::cout << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound();
    meta->makeSound();

    std::cout << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound();
    std::cout << std::endl;

    delete j;
    delete i;
    delete meta;
    delete cat;
}