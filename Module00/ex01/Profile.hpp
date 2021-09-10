#ifndef PROFILE_HPP
#define PROFILE_HPP

#include <iostream>

class Profile
{
private:
	std::string Data[11];

public:
	void SetDataByIndex(const int index, const std::string data);
	const std::string GetDataByIndex(const int index) const;
};

#endif