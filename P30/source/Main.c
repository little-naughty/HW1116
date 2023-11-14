#include<stdio.h>

void inverse(int *);

int main()
{
	int a[3] = { 3,5,7 };

	for (int x = 0; x < 3; x++)
	{
		printf("%d  ", a[x]);
	}
	printf("\n");

	inverse(a);

	for (int x = 0; x < 3; x++)
	{
		printf("%d  ", a[x]);
	}
	printf("\n");

	return 0;
}
void inverse(int *b)
{
	int tmp[3];

	for (int x = 0; x < 3; x++)
	{
		tmp[2 - x] = b[x];
	}
	for (int x = 0; x < 3; x++)
	{
		b[x] = tmp[x];
	}
}