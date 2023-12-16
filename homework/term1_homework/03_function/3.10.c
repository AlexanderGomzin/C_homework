#include <stdio.h>

void print_array(int array[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%i ", array[i]);
	}
}

int fact(int n)
    {
        int result = 1;
        for (int j = 2; j <= n; ++j)
        {
            result *= j;
         }
        return result;
    }

void factorials(int array[], int size)
{
	for (int k = 0; k < size; ++k)
	{
		array[k] = fact(array[k]);
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
    factorials(array, size);
    print_array(array, size);
}