#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#define LOG(x) cout << x << endl

void echo_sound(Animal &Animal)
{
	Animal.makeSound();
}
void echo_sound(WrongAnimal &WrongAnimal)
{
	WrongAnimal.makeSound();
}

int main(void)
{
	Animal animal;
	Cat cat;
	Dog dog;
	WrongAnimal wrong_animal;
	WrongCat wrong_cat;

	LOG("\n=== testing normal animal ! ===");
	echo_sound(animal);
	echo_sound(cat);
	echo_sound(dog);

	LOG("\n=== testing wrong animal ! ===");
	echo_sound(wrong_animal);
	echo_sound(wrong_cat);

	LOG("\n=============================");

	return 0;
}
