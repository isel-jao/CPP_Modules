#include <iostream>
#include "serialization.hpp"

int main(void)
{
	Data *person = new Data("isel-jao", 28);
	std::cout << "not serialized: " << *person << std::endl;

	uintptr_t serialized = serialize(person);
	std::cout << "serialized: " << serialized << std::endl;;

	Data *deserialized = deserialize(serialized);
	std::cout << "deserialized: " << *deserialized << std::endl;

	delete person;
	return 0;
}
