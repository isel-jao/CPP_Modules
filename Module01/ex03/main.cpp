#include "ZombieHorde.hpp"

int	main(void)
{
	Zombie	a("Imposter", "isel");
	std::cout << "There is a Imposter zombie." << std::endl;
	a.announce();
	
	std::cout << std::endl << "There are 5 horde zombies." << std::endl;
	ZombieHorde	zombieHorde(5);
	zombieHorde.announce();
	std::cout << std::endl << "Unfortunately, they are killed by Imposter." << std::endl;
	return (0);
}