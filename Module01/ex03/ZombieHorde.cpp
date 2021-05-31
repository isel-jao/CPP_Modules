#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(const int size)
	: Size(size)
{
	if (size <= 0)
	{
		std::cout << "SIZE MUST BE MORE THAN 0." << std::endl;
	}
	else
	{
		std::string alphabet("AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz");

		Hord = new Zombie[size];
		for (int i = 0; i < Size; i++)
		{
			std::string name;

			for (std::string::size_type i = 0; i < 10; i++)
			{
				name.push_back(alphabet[rand() % alphabet.length()]);
			}
			Hord[i].SetName(name);
			Hord[i].SetType("Horde");
		}
	}
}

ZombieHorde::~ZombieHorde(void)
{
	delete[] Hord;
}

void ZombieHorde::announce(void) const
{
	for (int i = 0; i < Size; i++)
	{
		Hord[i].announce();
	}
}