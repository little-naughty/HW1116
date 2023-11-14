#include<stdio.h>
#define SIZE 10

int main()
{
	int a[SIZE];

	for (int x = 0; x < SIZE; x++)
	{
		a[x] = 2 + 2 * x;
	}

	printf("%s%13s\n", "Element", "Value");

	for (int x = 0; x < SIZE; x++)
	{
		printf("%7d%13d\n", x, a[x]);
	}

	return 0;
}