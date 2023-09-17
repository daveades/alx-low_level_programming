#include <stdio.h>

/**
 * main - Entry point
 *
 * description -  Executes the FizzBuzz game
 *
 * Return: Always 0 success
 */

int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (number % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (number % 5 == 0)
		{
			printf("Buzz");
		}
		else if (number % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d ", number);
		}
		if (number == 100)
		{
			break;
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
