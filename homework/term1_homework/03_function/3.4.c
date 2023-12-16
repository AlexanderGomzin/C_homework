#include <stdio.h>

void triangle(int n)
{
	for (int i = 1; i <= n; i += 1)
	{
		for (int j = 1; j <= i; j += 1)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main()
{
	int n;
	scanf("%i", &n);
	triangle(n);
}