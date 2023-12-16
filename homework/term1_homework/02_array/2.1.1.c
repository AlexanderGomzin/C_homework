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
    for (int j = 0; j < n; ++j)
    {
    	a[n + j] = a[j];
    }
	for (int k = 0; k < 2*n; ++k)
	{
		printf("%i ", a[k]);
	}
}