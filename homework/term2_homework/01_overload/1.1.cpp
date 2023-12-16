#include <iostream>

namespace myspace
{
	void printNTimes(const char* str, int n)
	{
		for (int i = 0; i < n; ++i)
		{
			std::cout << str;
		}
		std::cout << std::endl;
	}
}

int main()
{
	int n = 10;
	char a[20] = "SEPM";
	myspace::printNTimes(a, n);
}