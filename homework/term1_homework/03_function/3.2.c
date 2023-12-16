#include <stdio.h>

int is_even(int x)
{
	if (x % 2 == 0)
	{
		return 0;
	}
	return 1;
}

int main()
{
	int x;
	scanf("%i", &x);
	printf("%i\n", is_even(x));
}