#include<stdio.h>

#define SIZE 100

int linearsearch(const int array[], int key, int size);

int main()
{
	int a[SIZE];
	int searchkey;
	int element;

	for (int x = 0; x < SIZE; x++)
	{
		a[x] = 2 * x;
	}

	printf("Enter integer search key¡G\n");
	scanf("%d", &searchkey);

	element = linearsearch(a, searchkey, SIZE);

	if (element != -1)
	{
		printf("Found value in element %d\n", element);
	}
	else
	{
		printf("Value not found\n");
	}

	return 0;
}
int linearsearch(const int array[], int key, int size)
{
	for (int x = 0; x < size; ++x)
	{
		if (array[x] == key)
		{
			return x;
		}
	}
	return -1;
}