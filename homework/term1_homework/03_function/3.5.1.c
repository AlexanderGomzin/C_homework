#include <stdio.h>

int sum_of_digits(int n)
{
	int q = n; int r = 0; int sum = 0;
	while (q != 0)
	{
		r = q % 10;
		sum += r;
		q /= 10;
	}
	return sum;
}

int main()
{
	int n;
	scanf("%i", &n);
	printf("%i\n", sum_of_digits(n));
}
