#include <stdio.h>

int main()
{
	int a[1000];
    int n;
    scanf("%i", &n);
    
    for (int i = 0; i < n; ++i)
    {
    	scanf("%i", &a[i]);
    }

    int first_index;
    int second_index;
    scanf("%i%i", &first_index, &second_index);

    for (int j = 0; j < n - second_index; ++j)
    {
    	a[first_index + j] = a[second_index + 1 + j];
    }    

	for (int k = 0; k < n + first_index - second_index - 1; ++k)
	{
		printf("%i ", a[k]);
	}
}