#include<stdio.h>

int main()
{
	char string1[20];
	char string2[] = "string literal";

	printf("Enter a string¡G ");
	scanf("%s", string1);

	printf("string1 is¡G %s\nstinrg2 is¡G %s\n"
		"string1 with spaces between characters is¡G \n",
		string1, string2);

	for (int x = 0; string1[x] != '\0'; x++)
	{
		printf("%c ", string1[x]);
	}
	printf("\n");

	return 0;
}