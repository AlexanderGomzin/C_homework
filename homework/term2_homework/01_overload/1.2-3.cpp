#include <iostream>
using std::cout, std::endl;

int cubeV(int x)
{
	return x * x * x;
}

int cubeR(int& x)
{
	return x * x * x;
}

int main()
{
	int a = 2;
	cout << cubeV(a) << endl;
	cout << cubeR(a) << endl;
}