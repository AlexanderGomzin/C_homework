#include <stdio.h>

int main()
{
	int number;
	scanf("%i", &number);

	int i = 1;
	while (i <= number)
	{
		printf("%3i -> ", i);
		printf("%3i -> ", i*i);
		printf("%3i \n", i*i*i);
		++i;
	}
}