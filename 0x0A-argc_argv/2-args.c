#include <stdio.h>

/**
 * main - prints all arguments to the program
 * each on a separate line
 * @argc: arguments count
 * @argv: array(pointer to) of pointers to strings(command line args)
 *
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
