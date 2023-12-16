#include <stdio.h>
#include <limits.h>

int main()
{
	int n;
    scanf("%i", &n);
    int temp = INT_MIN;
    int k_incr = 0;
    int k_decr = 0;

    for (int i = 0; i < n; ++i)
    {
    	int a;
        scanf("%i", &a);
        if (a > temp)
        {
            temp = a;
            k_incr += 1;
        }
        else if (a < temp)
        {
            temp = a;
            k_decr += 1;
        }
    }
    if (k_incr == n && k_decr == 0)
    {
        printf("Increasing");
    }
    else if (k_incr == 1 && k_decr == n-1)
    {
        printf("Decreasing");
    }
    else if (k_incr == 1 && k_decr == 0)
    {
        printf("Equal");
    } 	
}    