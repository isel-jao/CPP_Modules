#include "iter.hpp"

template<typename T>
void log(T x)
{
	std::cout << x << std::endl;;
}

int main()
{
	int arr[10];
	for(int i = 0; i < 10; i++)
	{
		arr[i] = 2 * i;
	}
	iter<int>(arr, 10, &log);
}