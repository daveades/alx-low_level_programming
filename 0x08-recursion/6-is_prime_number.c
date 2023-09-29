#include "main.h"

int check_num(int num, int index);

/**
 * is_prime_number - Receives return value from check_num
 * @n: Integer to be checked
 *
 * Return: 1 if int is prime otherwise, 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_num(n, 2));

	}
}

/**
 * check_num - the function that actually perfroms the calc
 * @num: the number to be checked
 * @index: the divisor for checking
 * if any number before num divides it cleanly
 *
 * Return: 0 or 1 depending on the calculation
 */
int check_num(int num, int index)
{
	if (index == num)
	{
		return (1);
	}
	else if (num % index == 0)
	{
		return (0);
	}
	else
	{
		return (check_num(num, index + 1));
	}
}
