#include <stdio.h>


int main(void)
{
	long unsigned int number;
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
}


