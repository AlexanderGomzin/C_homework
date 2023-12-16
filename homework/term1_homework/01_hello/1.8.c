#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	scanf("%i%i%i", &a, &b, &c);

	int number = a;
	while(number <= b)
	{
		if (number % c == 0)
		{
			printf("%i ", number);
		}
		number += 1;
	}
}