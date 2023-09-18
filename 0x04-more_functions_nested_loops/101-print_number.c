#include "main.h"

/**
 * print_number - prints an integer as char
 *
 * @n: the num to be printed
 */
void print_number(int n)
{
	int reverse, reverse2, digit, bits, max_num;

	reverse = reverse2 = 0;
	max_num = 1;
	for (bits = (sizeof(int) * 8) - 1; bits > 0; bits--)
		max_num = max_num * 2;
	max_num -= 1;
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	else if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		digit = n % 10;
		if (reverse < (max_num / 100))
			reverse = reverse * 10 + digit;
		else
			reverse2 = reverse2 * 10 + digit;
		n /= 10;
	}
	while (reverse > 0 || reverse2 > 0)
	{
		if (reverse2 > 0)
		{
			digit = reverse2 % 10;
			reverse2 /= 10;
		}
		else if (reverse > 0)
		{
			digit  = reverse % 10;
			reverse /= 10;
		}
		_putchar(digit + '0');
	}
}
