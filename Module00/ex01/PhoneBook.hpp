#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iomanip>
#include <sstream>

#include "Profile.hpp"

class PhoneBook
{
public:
	PhoneBook(void);

	int AddProfile(void);
	int ShowProfile(void);

private:
	Profile Profile[8];
	int Index;
	std::string Field[11];

	void showProfileByIndex(const int index) const;
};

#endif