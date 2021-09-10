#include "Profile.hpp"

void Profile::SetDataByIndex(const int index, const std::string str)
{
	Data[index] = str;
}

const std::string Profile::GetDataByIndex(const int index) const
{
	return (Data[index]);
}
