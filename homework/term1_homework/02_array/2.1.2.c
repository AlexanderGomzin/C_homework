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
    
    int value;
    int index;
    scanf("%i%i", &value, &index);

    for (int j = n; j > index + 2; --j)
    {
    	int temp = a[j - 1];
        a[j - 1] = a[j - 2];
        a[j] = temp;
    }
    a[index + 1] = value;

	for (int k = 0; k < n + 1; ++k)
	{
		printf("%i ", a[k]);
	}
}