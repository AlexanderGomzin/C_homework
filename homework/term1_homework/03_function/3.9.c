#include <stdio.h>

void print_array(int array[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%i ", array[i]);
	}
}

void last_digits(int array[], int size)
{
	for (int j = 0; j < size; ++j)
	{
		array[j] = array[j] % 10;
	}
}

int main()
{
	int size;
	scanf("%i", &size);
	int array[size];
    for (int k = 0; k < size; ++k)
    {
    	scanf("%i", &array[k]);
    }
    last_digits(array, size);
    print_array(array, size);
}