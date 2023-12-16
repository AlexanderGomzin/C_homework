#include <stdio.h>

int sum_of_digits_rec(int n)
{
	if (n / 10 == 0)
	{
		return n;
	}
    return sum_of_digits_rec(n / 10) + n % 10;
}

int main()
{
	int n;
	scanf("%i", &n);
	printf("%i\n", sum_of_digits_rec(n));
}