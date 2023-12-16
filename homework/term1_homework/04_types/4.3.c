#include <stdio.h>

float yearfrac(int year, int day)
{
	if ((year % 4) == 0)
	{
		return day / 366.0;
	}
	else if ((year % 4) != 0)
	{
		return day / 365.0;
	}
}

int main()
{
	int year; int day;
	scanf("%i%i", &year, &day);
	printf("%0.5f", yearfrac(year, day));
}