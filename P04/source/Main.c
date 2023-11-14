#include<stdio.h>

int main()
{
	int a[10];

	for (int x = 0; x < 10; x++)
	{
		a[x] = 0;
	}

	printf("%s%13s\n", "Element", "Value");

	for (int x = 0; x < 10; x++)
	{
		printf("%7d%13d\n", x, a[x]);
	}

	return 0;
}