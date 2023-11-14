#include<stdio.h>

int main()
{
	int a[10] = { 32,27,64,18,95,14,90,70,60,37};

	printf("%s%13s\n", "Element", "Value");

	for (int x = 0; x < 10; x++)
	{
		printf("%7d%13d\n", x, a[x]);
	}

	return 0;
}