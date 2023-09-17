#include <stdio.h>

/**
 * main - Entry point
 * description: prints the highest prime factor of 612852475143
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long int number;
	int prime;

	number  = 612852475143;
	prime = 2;
	while (number > 1)
	{
		if (number % prime == 0)
		{
			number = number / prime;
		}
		else
		{
			prime++;
		}
	}
	printf("%d\n", prime);
	return (0);
}
