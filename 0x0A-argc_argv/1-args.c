#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: cmd argument count
 * @argv: Array of strings - cmd arguments
 * Return: Always 0.
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}


