#include "Pony.hpp"

// Initialize static member of class PONY WisdomePool;

std::string Pony::WisdomePool[] = {
	"Life is like Sanskrit read to a pony.",
	"A pony is a childhood dream. A horse is an adulthood treasure.",
	"A child who is happy on his pony's back has something which will be to him a glorious memory that the years cannot dim.",
	"In my world, everyone's a pony and they all eat rainbows and poop butterflies!",
	"I'm not going to get off the pony as long as they let me ride it.",
	"If there’s a magic pony in the story, chances are I’ll read it.",
	"It is better to ride a pony than a horse which throws you.",
	"If poisons were ponies, I'd put my money on cyanide.",
	"Adventures are not all pony-rides in May-sunshine.",
	"I do love ponies. Wish I could eat one right now.",
	"I'm not a gentle pony... I promise you, you will have to work to keep your seat.",
	"If you hit a pony over the nose at the outset of your acquaintance, he may not love you but he will take a deep interest in your movements ever afterwards",
	"It's not all rainbows and ponies"
	};

int Pony::PoolLenght = 13;

Pony::Pony(const std::string &name) : name(name)
{
	std::cout << name << " was born!" << std::endl;
}

void Pony::Wise(void)
{
	srand(time(0));

	std::cout << "A wise Pony once said :" << std::endl;
	std::cout << "\t" << WisdomePool[rand() % PoolLenght] << "\nand then went to sleep 😪😪" << std::endl;
	sleep(2);
	std::cout << std::endl;
}
