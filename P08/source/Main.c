#include<stdio.h>
#define SIZE 10

int main()
{
	int a[SIZE] = { 19,3,15,7,11,9,13,5,17,1 };

	printf("%s%13s%17s\n", "Element", "Value", "Histogram");

	for (int x = 0; x < SIZE; x++)
	{
		printf("%7d%13d  ", x, a[x]);
		for (int y = 1; y <= a[x]; y++)
		{
			printf("%c", '*');
		}
		printf("\n");
	}
}