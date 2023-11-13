#include "Cat.hpp"
#include "Dog.hpp"

// int main() {
//     const Animal *x = new Cat();
//     const Animal *z = new Dog();
//     const Cat *y = new Cat();
//     Cat cat = *y;

//     x->makeSound();
//     x->printIdeas(3);

//     std::cout << std::endl;

//     z->makeSound();
//     z->setIdea("ola", 0);

//     std::cout << std::endl;
//     z->printIdeas(4);
//     std::cout << std::endl;

//     cat.printIdeas(4);

//     std::cout << std::endl;

//     delete y;
//     delete z;
//     delete x;
// }

int main() {
    // const AAnimal x;
    const AAnimal *animals[10];

    for (int i = 0; i < 10; i++) {
        if (i == 0)
            animals[i] = new Dog();
        else if (i % 2 != 0)
            animals[i] = new Cat();
        else if (i % 2 == 0)
            animals[i] = new Dog();
    }

    std::cout << std::endl;

    for (int i = 0; i < 10; i++) {
        std::cout << animals[i]->getType() << " makes ";
        animals[i]->makeSound();
        std::cout << std::endl;
    }

    std::cout << std::endl;

    for (int i = 0; i < 10; i++) {
        delete animals[i];
    }

    std::cout << "------IDEAS------" << std::endl;
    
    Dog* bonito = new Dog();
    Dog* tmp2 = new Dog(*bonito);

    bonito->printIdeas(5);
    tmp2->printIdeas(5);

    bonito->setIdea("bonito thinks he is pretty", 0);
    bonito->printIdeas(5);
    tmp2->setIdea("tmp2 thinks he is earth is flat", 0);
    tmp2->printIdeas(5);
    
    delete bonito;
    delete tmp2;

    std::cout << "------------" << std::endl;

    std::cout << "Dog Deep copy" << std::endl;
    std::cout << std::endl;

    Dog basic;
    {
        Dog tmp = basic;
    }

    std::cout << "------------" << std::endl;

    std::cout << "Testing Deep copy" << std::endl;
    std::cout << std::endl;

    Cat test2;
    {
        Cat temp2 = test2;
    }

    std::cout << "----------------" << std::endl;

	return (0);
}