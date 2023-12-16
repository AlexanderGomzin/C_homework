#include <stdio.h>

void print_even(int a, int b)
{
	for (int number = a; number <= b; number += 1)
	{
		if (number % 2 == 0)
		{
			printf("%i ", number);
		}
	}
}

int main()
{
	int a;
	int b;
	scanf("%i%i", &a, &b);
	print_even(a, b);
}