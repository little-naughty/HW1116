#include<stdio.h>

#define SIZE 5

void modifyArray(int b[], int size);
void modifyElement(int e);

int main()
{
	int a[SIZE] = { 0,1,2,3,4 };

	printf("Effects of passing entire array by reference¡G\n\n"
		"The values of the original array are¡G\n");

	for (int x = 0; x < SIZE; x++) {
		printf("%3d", a[x]);
	}
	printf("\n");

	modifyArray(a, SIZE);

	printf("The values of the modified array are¡G\n");

	for (int x = 0; x < SIZE; x++)
	{
		printf("%3d", a[x]);
	}
	printf("\n\n\nEffects of passing arrayelement"
		"by value¡G\n\nThe value of a[3] is %d\n", a[3]);

	modifyElement(a[3]);

	printf("The value of a[3] is %d\n", a[3]);

	return 0;
}
void modifyArray(int b[], int size)
{
	for (int x = 0; x < size; x++)
	{
		b[x] *= 2;
	}
}
void modifyElement(int e)
{
	printf("Value in modifyElement is %d\n", e *= 2);
}