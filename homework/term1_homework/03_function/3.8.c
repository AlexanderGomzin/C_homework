#include <stdio.h>

int count_even(int array[], int size)
{
	int s = 0;
	for (int i = 0; i < size; ++i)
	{
		if (array[i] % 2 == 0)
		{
			s += 1;
		}
	}
	return s;
}

int main()
{
	int size;
	scanf("%i", &size);
	int array[size];
    for (int j = 0; j < size; ++j)
    {
    	scanf("%i", &array[j]);
    }
    printf("%i\n", count_even(array, size));
}