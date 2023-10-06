#include <stdio.h>

/**
 * main - Prints the number of command line args
 * @argc: Num of command line args
 * @argv: array(pointer to) of pointer to strings(command line args)
 *
 * Return: Always 0.
 */
int main(int argc, __attribute__((unused))char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
