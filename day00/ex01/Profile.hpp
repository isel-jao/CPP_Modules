#ifndef PROFILE_HPP
# define PROFILE_HPP

# include <iostream>

class Profile
{
public:
	void				SetDataByIndex(const int index, const std::string data);
	const std::string	GetDataByIndex(const int index) const;

private:
	std::string mData[11];
};

#endif