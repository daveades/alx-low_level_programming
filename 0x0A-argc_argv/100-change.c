#include "main.h"

/**
 * main - Entry point
 *
 * @argc: num of command line args
 * @argv: array of command line args
 * Return: 0 if success and 1 if fail
 */
int main(int argc, char **argv)
{
	int num_of_coins, value, amount, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	num_of_coins = 0;

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (amount >= coins[i])
		{
			amount -= coins[i];
			num_of_coins++;
		}
	}
	printf("%d\n", num_of_coins);
	return (0);
}

