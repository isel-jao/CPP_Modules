#include "Pony.hpp"

Pony::Pony(const std::string& name)
	: name(name)
{
	std::cout << name << " was created!" << std::endl;

}

void	Pony::Eat(void)
{
	std::cout << name << " 🍖🍖😋 " << std::endl;
}

void	Pony::Sleep(void)
{
	std::cout << name << " 💤💤😪 " << std::endl;
}