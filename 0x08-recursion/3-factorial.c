#include "main.h"

/**
 * factorial - return the factorial of a number
 * @n: integer to calculate factorial
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
