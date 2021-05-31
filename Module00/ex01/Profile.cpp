#include "Profile.hpp"

void	Profile::SetDataByIndex(const int index, const std::string str)
{
	mData[index] = str;
}

const	std::string Profile::GetDataByIndex(const int index) const
{
	return (mData[index]);
}
