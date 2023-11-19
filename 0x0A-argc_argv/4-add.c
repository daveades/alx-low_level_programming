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
	char *s;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			s = argv[i];
			while (*s != 0)
			{
				if (*s < 48 || *s > 57)
				{
					printf("Error\n");
					return (1);
				}
				s += 1;
			}
			number = atoi(argv[i]);
			sum += number;
		}
		printf("%d\n", sum);
	}
	return (0);
}

