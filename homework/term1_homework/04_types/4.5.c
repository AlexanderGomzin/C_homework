#include <stdio.h>

double pi_calc(int n)
{
	double sum = 0.0;
	for (int i = 1; i <= n; ++i)
	{
		if ((i % 2) == 0)
		{
			sum += (-1.0) / (2.0 * i - 1.0);
		}
		else if ((i % 2) == 1)
		{
			sum += 1.0 / (2.0 * i - 1.0);
		}
	}
	return sum;
}

int main()
{
	int n;
	scanf("%i", &n);
	printf("%lf\n", 4.0 * pi_calc(n));
}