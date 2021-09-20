#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <string>
# include <iostream>
// # include <stdint.h>

struct Data
{
	std::string name;
	int age;

	Data(std::string  n = "0x00",  int a = 18);
	Data(Data const & obj);
	Data & operator=(Data const & obj);
	~Data();
};

std::ostream & operator<<(std::ostream & os, Data const & obj);

uintptr_t	serialize(Data *data);
Data *		deserialize(uintptr_t raw);

#endif
