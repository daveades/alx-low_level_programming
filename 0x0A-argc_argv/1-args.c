#include <stdio.h>

/**
 * main - Prints the number of command line args
 * @argc: Num of command line args
 * @argv: pointer to *args[0] of command line args
 *
 * Return: Always 0.
 */
int main(int argc, __attribute__((unused))int **argv)
{
	printf("%d\n", argc);
	return (0);
}
