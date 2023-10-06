#include "main.h"

/**
 * main - prints the name of the program to stdout
 * @argc: argument count
 * @argv: array(pointer to) of pointers to strings(command line args)
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
