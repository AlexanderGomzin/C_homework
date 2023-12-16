#include <stdio.h>

void print_array(int array[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%i ", array[i]);
	}
}

void reverse(int array[], int size)
{
	int m = size - 1;
	if (m % 2 == 0)
	{
		for (int j = 0; j <= m / 2 - 1; ++j)
		{
			int temp = array[j];
			array[j] = array[m - j];
			array[m - j] = temp;
		}
	}
	else if (m % 2 == 1)
	{
		for (int j = 0; j <= m / 2; ++j)
		{
			int temp = array[j];
			array[j] = array[m - j];
			array[m - j] = temp;
		}
	}
}

int main()
{
	int size;
	scanf("%i", &size);
	int array[size];
    for (int l = 0; l < size; ++l)
    {
    	scanf("%i", &array[l]);
    }
    reverse(array, size);
    print_array(array, size);
}