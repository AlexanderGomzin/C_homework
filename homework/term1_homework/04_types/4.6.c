#include <stdio.h>
#include <math.h>

const double eps = 1e-10;
const double step = 1e-2;

double gamma_function(double x)
{
    double area = 0;
    double sum = 0; double i = 1.0;
	while (area < eps)
	{
		sum += area;
		area = (pow(step * i, x - 1) * exp(-step * i) + pow(step * (i + 1), x - 1) * exp(-step * (i + 1))) * step / 2.0;
        i += 1.0;
	}
	while (area >= eps)
	{
		sum += area;
		area = (pow(step * i, x - 1) * exp(-step * i) + pow(step * (i + 1), x - 1) * exp(-step * (i + 1))) * step / 2.0;
        i += 1.0;
	}
	return sum;
}

int main()
{
	double x;
	scanf("%lf", &x);
	printf("%lf\n", gamma_function(x));
}