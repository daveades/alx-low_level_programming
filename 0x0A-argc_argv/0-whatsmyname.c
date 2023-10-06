#include "main.h"

/**
 * main - prints the name of the program to stdout
 * @argc: argument count
 * @argv: array of pointers to string (pointer to pointer to char)
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
