#include "ZombieEvent.hpp"

// clang++ *.cpp -Wall -Wextra -Werror -&& ./a.out

int	main(void)
{
	Zombie	a("Imposter", "ykoh");
	std::cout << "There is an imposter zombie." << std::endl;
	a.announce();
	
	ZombieEvent	e;
	Zombie*		hangry[5];

	e.setZombieType("hangry");
	std::cout << std::endl << "There are 5 hangry zombies." << std::endl;
	for (int i = 0; i < 5; i++)
	{
		hangry[i] = e.randomChump();
	}
	std::cout << std::endl ;
	for (int i = 0; i < 5; i++)
	{
		std::cout <<  "the imposter managed to kill " << hangry[i]->GetName() <<std::endl;
		delete hangry[i];
	}
	std::cout << std::endl << "Clone Generated." << std::endl;

	e.setZombieType("Clone");
	Zombie* clone = e.newZombie("ykoh");
	clone->announce();
	std::cout << std::endl << "the clone bit the imposter" << std::endl;
	std::cout << std::endl << "the imposter killed his clone" << std::endl;
	std::cout << std::endl << "the imposter became a zombie" << std::endl;
	delete(clone);
	return (0);
}