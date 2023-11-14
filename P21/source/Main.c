#include<stdio.h>

void staticArray(void);
void autoArray(void);

int main()
{
	printf("First call to each function¡G\n");
	staticArray();
	autoArray();

	printf("\n\nSecond call to each function¡G\n");
	staticArray();
	autoArray();
	printf("\n");

	return 0;
}
void staticArray()
{
	static int array1[3];

	printf("\nValues on entering staticArrayInit¡G\n");

	for (int x = 0; x <= 2; x++)
	{
		printf("array[%d] = %d  ", x, array1[x]);
	}

	printf("\nValues on exiting staticArrayInit¡G\n");

	for (int x = 0; x <= 2; x++)
	{
		printf("array[%d] = %d  ", x, array1[x] += 5);
	}
}
void autoArray(void)
{
	int array2[3] = { 1,2,3 };

	printf("\n\nValues on entering automicArrayInit¡G\n");

	for (int x = 0; x <= 2; x++)
	{
		printf("array2[%d] = %d  ", x, array2[x]);
	}

	printf("\nValues on exiting automicArrayInit¡G\n");

	for (int x = 0; x <= 2; x++)
	{
		printf("array2[%d] = %d  ", x, array2[x] += 5);
	}
}