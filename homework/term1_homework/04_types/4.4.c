#include <stdio.h>
#include <math.h>

unsigned long long fact(int n)
{
	unsigned long long result = 1;
	for (int i = 1; i <= n; ++i)
	{
		result *= i;
	}
	return result;
}
double volume_rel(int n)
{
	const double pi = M_PI;
	if (n % 2 == 0)
	{
		return fact(n / 2) / pow(pi, n / 2);
	}
	else if (n % 2 == 1)
	{
		return fact(n) / ((2.0 * fact((n - 1)/ 2)) * pow(4 * pi, (n - 1) / 2));
	}
}

int main()
{
	int n;
	scanf("%i", &n);
	printf("%lf\n", volume_rel(n));
}