#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

using std::cout;
using std::endl;

int main(void)
{
    size_t const array_size = 10;

    Animal **animals = new Animal *[array_size];

    for (size_t i = 0; i != array_size; ++i)
    {
        if (i < array_size / 2)
        {
            animals[i] = new Dog();
        }
        else
        {
            animals[i] = new Cat();
        }
    }
    for (size_t i = 0; i != array_size; ++i)
    {
        delete animals[i];
    }

    Cat oringinal;
    Cat cpycat = oringinal;
    delete[] animals;
    return 0;
}
