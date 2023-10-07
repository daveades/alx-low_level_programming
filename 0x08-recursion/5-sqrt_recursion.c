#include "main.h"

int calc_root(int number, int divisor);
/**
 * _sqrt_recursion - Calc sqrt of a number
 * @n: Number to calc sqrt
 *
 * Return: sqrt or -1 if no sqrt
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	return (calc_root(n, 1));
}

/**
 * calc_root - does the calc and returns sqrt to _sqrt_recursion
 * @number: number to calc sqrt
 * @divisor: start off at 1 and increases - divides number each time
 * to find if number / divisor == divisor
 *
 * Return: sqrt or -1 if no sqrt to _sqrt_recursion
 */
int calc_root(int number, int divisor)
{
	float num_as_float;
	float div_as_float;
	float root;

	num_as_float = (float)number;
	div_as_float = (float)divisor;
	root = num_as_float / div_as_float;
	if ((divisor > number / 2) || (number < 0))
	{
		return (-1);
	}
	else if (root == div_as_float)
	{
		return (divisor);
	}
	else
	{
		return (calc_root(number, divisor + 1));
	}

}
