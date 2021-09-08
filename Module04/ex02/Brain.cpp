#include <string>
#include <iostream>
#include "Brain.hpp"

using std::cout;
using std::endl;
using std::string;

Brain::Brain() {}

Brain::~Brain() {}

Brain::Brain(Brain const &obj) { *this = obj; }

Brain &Brain::operator=(Brain const &obj)
{
	if (this != &obj)
		for (size_t i = 0; i != idea_count; ++i)
			ideas[i] = obj.ideas[i];
	return *this;
}

string const &Brain::getIdea(size_t index) const
{
	return ideas[index];
}

void Brain::setIdea(size_t index, string const &str)
{
	ideas[index] = str;
}
