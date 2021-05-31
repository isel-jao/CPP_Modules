#include "Pony.hpp"

// clang++ main.cpp Pony.cpp -Wall -Wextra -Werror -o Pony && ./Pony
void	ponyOnTheHeap(void)
{
	Pony*	pony;

	pony = new Pony("🐴");
	pony->Eat();
	pony->Sleep();
	delete pony;
}

void	ponyOnTheStack(void)
{
	Pony	pony("🦄");
	pony.Eat();
	pony.Sleep();
}

int		main(void)
{
	std::cout << "ponyOnTheHeap" << std::endl;
	ponyOnTheHeap();
	std::cout << std::endl;
	std::cout << "ponyOnTheStack" << std::endl;
	ponyOnTheStack();
	return (0);
}