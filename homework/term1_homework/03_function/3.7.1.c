#include <stdio.h>

int trib(int n)
{
	if (n < 5)
	{
		return n / 2;
	}
	return trib(n - 3) + trib(n - 2) + trib(n - 1);
}

int main()
{
	int n;
	scanf("%i", &n);
	printf("%i\n", trib(n));
}