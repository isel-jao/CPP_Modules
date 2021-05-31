#include <iostream>
#include <string>

int main(int ac, char **av)
{
	int i = 1;
	std::string s = "";

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return(0);
	}
	while (av[i])
		s += av[i++];
	i = 0;
	while (s[i])
		std::cout << (char)toupper(s[i++]);
	std::cout << std::endl;
}