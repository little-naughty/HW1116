#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void bubber(int,int);

int main()
{
	srand(time(NULL));

	int n = rand() % 7 + 3;
	int a[10];

	for (int x = 0; x < n; x++)
	{
		 a[x] = rand() % 10;
	}

	printf("排列前：");

	for (int x = 0; x < n; x++)
	{
		printf("%d ", a[x]);
	}
	printf("\n\n");

	bubber(a, n);

	printf("排列後：");

	for (int x = 0; x < n; x++)
	{
		printf("%d ", a[x]);
	}

	return 0;
}
void bubber(int a[], int n)
{
	int tmp;

	for (int x = 0; x < n - 1; x++)
	{
		for (int y = 0; y < n - x - 1; y++)
		{
			if (a[y] > a[y + 1])
			{
				tmp = a[y];
				a[y] = a[y + 1];
				a[y + 1] = tmp;
			}
		}
	}
}