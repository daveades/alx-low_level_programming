#include "main.h"

/**
 * print_line - Prints a straight line to stdout
 * @n: The number of '_' that specifiesline length
 */

void print_line(int n)
{
	int i;

	for (i = 0; n > 0 && i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
