#include "main.h"

/**
 * print_number - print a number as char to stdout
 *
 * @n: the number to be printed
 */
void print_number(int n)
{
	int placeval, digit;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	placeval = 1;
	while (n >= placeval * 10)
	{
		placeval = placeval * 10;
	}
	while (placeval >= 1)
	{
		digit = (n / placeval) % 10;
		_putchar(digit + '0');
		placeval  = placeval / 10;
	}
}
