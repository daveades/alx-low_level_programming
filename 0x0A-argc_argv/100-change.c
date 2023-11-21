#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: num of command line args
 * @argv: array of command line args
 * Return: 0 if success and 1 if fail
 */
int main(int argc, char **argv)
{
	int num_of_coins, position, amount, denomination;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		num_of_coins = 0;
		while (amount != 0)
		{
			denomination = coins[position];
			if (amount >= denomination)
			{
				amount -= denomination;
				num_of_coins++;
			}
			else
			{
				position++;
			}
		}
		printf("%d\n", num_of_coins);
	}
	return (0);
}
