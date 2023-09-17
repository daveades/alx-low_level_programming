#include "main.h"

/**
 * print_diagonal - prints a diagonal line to stdout
 * @n: number of '\' characters
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			if (i > 1)
			{
				for (j = 1; j < i; j++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
