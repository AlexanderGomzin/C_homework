#include <stdio.h>
#include <limits.h>

int main()
{
	int n;
    scanf("%i", &n);
    int even_min = INT_MAX;
    int not_even_max = INT_MIN;

    for (int i = 0; i < n; ++i)
    {
    	int a;
        scanf("%i", &a);

        if (a % 2 == 0)
    	{
    		if (a < even_min)
    		{
    			even_min = a;
    		}
    	}
    	if (a % 2 == 1)
    	{
    		if (a > not_even_max)
    		{
    			not_even_max = a;
    		}
    	}
    }		
    
    if (even_min == INT_MAX)
    {
        printf("None ");
    }
    else if (even_min != INT_MAX)
    {
        printf("EvenMin = %i ", even_min);
    }
    if (not_even_max == INT_MIN)
    {
        printf("None ");
    }
    else if (not_even_max != INT_MIN)
    {
        printf("NotEvenMax = %i ", not_even_max);
    }
}    