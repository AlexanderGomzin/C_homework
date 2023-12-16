#include <stdio.h>

void print_array(int array[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%i ", array[i]);
	}
}

void bubbleSort(int arr[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = 0; j < size - 1 - i; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
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
    bubbleSort(array, size);
    print_array(array, size);
}