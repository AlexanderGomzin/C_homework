#include <stdio.h>

int main()
{
    int n;
    int m;
    scanf("%i%i", &n, &m);

    int s = 0;
	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= m; ++j)
		{
			int coeff = 1;
			for (int k = 0; k < i + j; ++k)
			{
				coeff *= -1;
			}
			s += coeff*i*j;
		}
	}
	printf("%i", s);
}