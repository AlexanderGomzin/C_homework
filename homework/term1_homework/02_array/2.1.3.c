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

    int index;
    scanf("%i", &index);

    for (int j = index; j < n - 1; ++j)
    {
    	int temp = a[j + 1];
        a[j + 1] = a[j + 2];
        a[j] = temp;
    }    

	for (int k = 0; k < n - 1; ++k)
	{
		printf("%i ", a[k]);
	}
}