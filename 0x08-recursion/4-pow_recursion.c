#include "main.h"

/**
 * _pow_recursion - Calculate x to the power of y
 * @x - integer to be raised by y
 * @y - index of x
 *
 * Return: x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(y - 1));
	}

