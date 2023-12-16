#include <stdio.h>
#include <limits.h>

int main()
{
	int a;
	int b;
	scanf("%i%i", &a, &b);
	int max_length = 1;
	int max_length_number = 0;

	int number = a;
	while (number <= b)
	{
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
		    length += 1;
		}
		printf("1\n");
		length += 1;
		if (length > max_length)
		{
			max_length = length;
			max_length_number = number;
		}
		number += 1;
	}
	printf("1\n");
	printf("%i ", max_length_number);
	printf("MaxLength = %i ", max_length);
}