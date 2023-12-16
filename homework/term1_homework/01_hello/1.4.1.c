#include <stdio.h>
#include <limits.h>

int main()
{
	int n;
    scanf("%i", &n);
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < n; ++i)
    {
    	int a;
    	scanf("%i", &a);
    	if (a > max)
    	{
    		max = a;
    	}
    	if (a < min)
    	{
    		min = a;
    	}
    }		
    printf("Max = %i ", max);
    printf("Min = %i ", min);
}    

    