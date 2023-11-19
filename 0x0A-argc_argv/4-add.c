#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: Number os command line args
 * @argv: array of command line args
 * Return: O or 1
 */
int main(int argc, char **argv)
{
	int sum;
	int number;
	int i;

	if (argc < 2)
	{
		printf("%d", 0);
	}
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < 49 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				number = atoi(argv[i]);
				sum += number;
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}

