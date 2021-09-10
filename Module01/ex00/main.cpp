#include "Pony.hpp"

void ponyOnTheHeap(void)
{
	Pony *pony;

	pony = new Pony("🐴");
	pony->Wise();
	delete pony;
}

void ponyOnTheStack(void)
{
	Pony pony("🦄");
	pony.Wise();
}

int main(void)
{
	std::cout << "ponyOnTheHeap" << std::endl;
	ponyOnTheHeap();
	std::cout << std::endl;
	std::cout << "ponyOnTheStack" << std::endl;
	ponyOnTheStack();
	return (0);
}