#include<stdio.h>

void Array(const int a[][3]);

int main()
{
	int array1[2][3] = { {1,2,3},{4,5,6} };
	int array2[2][3] = { 1,2,3,4,5 };
	int array3[2][3] = { {1,2},{4} };

	printf("Values in array1 by row are¡G\n");
	Array(array1);

	printf("Values in array2 by row are¡G\n");
	Array(array2);

	printf("Values in array3 by row are¡G\n");
	Array(array3);

	return 0;
}
void Array(const int a[][3])
{
	for (int x = 0; x <= 1; x++)
	{
		for (int y = 0; y <= 2; y++)
		{
			printf("%d ", a[x][y]);
		}
		printf("\n");
	}
}