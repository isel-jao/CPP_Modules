#include "serialization.hpp"

using std::string;

Data::Data(std::string n, int a) : name(n), age(a) {}

Data::Data(Data const &obj) : name(obj.name), age(obj.age) {}

Data &Data::operator=(Data const &obj)
{
	if (this != &obj)
	{
		name = obj.name;
		age = obj.age;
	}
	return *this;
}
Data::~Data() {}

std::ostream &operator<<(std::ostream &os, Data const &obj)
{
	os << "name " << obj.name << ", "
	   << "age " << obj.age;
	return os;
}

// return (uintptr_t )(data);
uintptr_t serialize(Data *data)
{
	return reinterpret_cast<uintptr_t>(data);
}

// return (Data *)(raw);
Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}
