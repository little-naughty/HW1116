#include<stdio.h>
#define SIZE 12

int main()
{
	int a[SIZE] = { 1,3,5,4,7,2,99,16,45,67,89,45 };
	int total = 0;

	for (int x = 0; x < SIZE; x++)
	{
		total += a[x];
	}

	printf("Total of array element values is %d\n", total);
}