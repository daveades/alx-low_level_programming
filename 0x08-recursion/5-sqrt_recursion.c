#include "main.h"

/**
 * _sqrt_recursion - Calculates the square root of a number recursively.
 * @n: The number to calculate the square root of.
 *
 * Return: The square root of n,
 * or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_helper(n, 1, n));
}

/**
* sqrt_helper - Helper function for calculating the square root recursively.
* @n: The number to calculate the square root of.
* @start: The starting point for the search.
* @end: The ending point for the search.
*
* Return: The square root of n,
* or -1 if n does not have a natural square root.
*/
long int sqrt_helper(long int n, long int start, long int end)
{
	long int mid;

	mid = (start + end) / 2;
	if (mid * mid == n)
		return (mid);
	if (mid * mid < n)
	{
		if ((mid + 1) * (mid + 1) > n)
			return (mid);
		else
			return (sqrt_helper(n, mid + 1, end));
	}
	else
	{
		return (sqrt_helper(n, start, mid - 1));
	}
}
