#include <stdio.h>
#include <limits.h>

int main()
{
	int number;
	scanf("%i", &number);
	int max = 1;
	int length = 0;
	while (number != 1)
	{
		printf("%i ", number);
		int temp;
		if (number % 2 == 1)
		{
			temp = 3*number + 1;
		}
		else if (number % 2 == 0)
		{
			temp = number/2;
		}
		number = temp;
		if (number > max)
		{
			max = number;
		}
		length += 1;
	}
	printf("1\n");
	printf("Max = %i ", max);
	printf("Length = %i ", length + 1);
}