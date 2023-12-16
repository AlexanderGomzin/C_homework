#include <stdio.h>

int main()
{
	int a; 
	int b; 
	int c;

	scanf("%i%i%i", &a, &b, &c);

	if (a == b && b == c)
		printf("Constant");
	
	if (b - a == 1 && c - b == 1 || b - a == -1 && c - b == -1)
		printf("Consecutive ");

	if (b > a && c > b)
		printf("Increasing");
	
	else if (b < a && c < b)
		printf("Decreasing");

}
