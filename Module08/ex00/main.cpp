#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main()
{
	std::vector<int> v;

	for (int i = 0; i < 10; i++)
		v.push_back(2 * i);
	int arr[3] = {4, 7, 1337};
	std::vector<int>::iterator r[] =
		{easyfind(v, arr[0]), easyfind(v, arr[1]), easyfind(v, arr[2])};

	for (int i = 0; i < 3; i++)
	{
		if (r[i] == v.end())
			std::cout << arr[i] << " not found!" << std::endl;
		else
			std::cout << arr[i] << " found!" << std::endl;
		;
	}
	return 0;
}