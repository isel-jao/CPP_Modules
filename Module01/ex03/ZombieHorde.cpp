#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(const int size): Size(size)
{
	if (size <= 0)
		std::cout << "SIZE MUST BE MORE THAN 0." << std::endl;
	else
	{
		std::srand(std::time(NULL));
		std::string alphabet("AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz");

		Horde = new Zombie[size];
		for (int i = 0; i < Size; i++)
		{
			std::string name;

			for (std::string::size_type i = 0; i < 10; i++)
			{
				name.push_back(alphabet[rand() % alphabet.length()]);
			}
			Horde[i].SetName(name);
			Horde[i].SetType("Horde");
		}
	}
}

ZombieHorde::~ZombieHorde(void)
{
	delete[] Horde;
}

void ZombieHorde::announce(void) const
{
	for (int i = 0; i < Size; i++)
		Horde[i].announce();
}