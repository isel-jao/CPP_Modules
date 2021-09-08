#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

using std::cout;
using std::endl;

int main(void)
{
    Animal *cat = new Cat();

    cat->makeSound();
    delete cat;
}
