#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of a given number of bytes.
 * @num_bytes: The number of bytes to print.
 */
void print_opcodes(int num_bytes)
{
	unsigned char *opcodes = (unsigned char *)print_opcodes;

	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", opcodes[i]);
	}
	printf("\n");
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, non-zero on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(num_bytes);

	return (0);
}
