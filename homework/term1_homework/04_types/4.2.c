#include <stdio.h>

unsigned long long arrange_calc(int n, int k)
{
	unsigned long long result = 1;
	for (int j = 0; j <= k - 1; ++j)
	{
		result *= (n - k + 1 + j);
	}
    return result;
}

int main()
{
	int n; int k;
	scanf("%i%i", &n, &k);
	printf("%llu\n", arrange_calc(n, k));
}