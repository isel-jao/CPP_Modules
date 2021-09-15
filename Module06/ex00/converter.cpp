#include "converter.hpp"

converter::converter(std::string const &value) : str(value)
{
	parse();
}

void converter::parse()
{
	int i = 0;
	int signe = 1;
	size_t size = str.size();

	if (isdigit(str[0]))
	{
		if (str[size - 1] == 'f')
			type = FLOAT_TYPE;
		else if (str.find('.') != -1)
			type = DOUBLE_TYPE;
		else
			type = INT_TYPE;
	}
	
}