#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

class Pony
{
private:
	const std::string name;
	static std::string WisdomePool[];
	static int PoolLenght;

public:
	Pony(const std::string &name);
	void Wise(void);
};

#endif