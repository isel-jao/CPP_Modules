#include "Human.hpp"

const Brain &Human::getBrain(void) const
{
	return (this->Brain);
}

std::string Human::identify(void) const
{
	return (this->Brain.identify());
}