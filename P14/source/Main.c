#include<stdio.h>
#define students 3
#define exams 4

int min(const int grades[][exams], int pupils, int tests);
int max(const int grades[][exams], int pupils, int tests);
double average(const int setgrades[], int tests);
void Array(const int grades[][exams], int pupils, int tests);

int main()
{
	int student;
	const int studentgrades[students][exams] =
	{ {77,68,86,73},
	  {96,87,89,78},
	  {70,90,86,81} };

	printf("The array is¡G\n");
	Array(studentgrades, students, exams);

	printf("\n\nLowest grade¡G %d\nHighest grade¡G %d\n",
		min(studentgrades, students, exams),
		max(studentgrades, students, exams));

	for (student = 0; student < students; student++)
	{
		printf("The average grade for student %d is %.2f\n",
			student, average(studentgrades[student], exams));
	}
}
void Array(const int grades[][exams], int pupils, int tests)
{
	printf("                 [0][1][2][3]");

	for (int x = 0; x < pupils; x++)
	{
		printf("\nstudentgrades[%d] ", x);
		for (int y = 0; y < tests; y++)
		{
			printf("%-5d", grades[x][y]);
		}
	}
}
int min(const int grades[][exams], int pupils, int tests)
{
	int lowgrade = 100;

	for (int x = 0; x < pupils; x++)
	{
		for (int y = 0; y < tests; y++)
		{
			if (grades[x][y] < lowgrade)
			{
				lowgrade = grades[x][y];
			}
		}
	}
	return lowgrade;
}
int max(const int grades[][exams], int pupils, int tests)
{
	int highgrade = 0;

	for (int x = 0; x < pupils; x++)
	{
		for (int y = 0; y < tests; y++)
		{
			if (grades[x][y] > highgrade)
			{
				highgrade = grades[x][y];
			}
		}
	}
	return highgrade;
}
double average(const int setgrades[], int tests)
{
	int total = 0;

	for (int x = 0; x < tests; x++)
	{
		total += setgrades[x];
	}
	return (double)total / tests;
}