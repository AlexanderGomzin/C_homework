#include <stdio.h>
#include <limits.h>

int main()
{
	int n;
    scanf("%i", &n);
    int max = INT_MIN;
    int k = 0;

    for (int i = 0; i < n; ++i)
    {
    	int a;
    	scanf("%i", &a);
    	if (a > max)
    	{
    		max = a;
            k = 0;
    	}
    	if (a == max)
        {
            k += 1;
        }
    }		
    printf("Max = %i ", max);
    printf("NumberOfMaxValues = %i ", k);
}    