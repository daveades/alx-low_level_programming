#include <stdio.h>
#include <stdlib.h>

/**
 * main -  A program that prints minimum number
 * of coins required to give change
 * @argc: num of command line args
 * @argv: array of command line args
 *
 * Return: O if success and 1 if Error
 */
int main(int argc, char **argv)
{
	int amount, value, num_of_coins;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	value = 0;
	num_of_coins = 0;
	while (amount > 0)
	{
		if (amount >= coins[value])
		{
			amount -= coins[value];
			num_of_coins++;
		}
		else
		{
			value++;
		}
	}
	printf("%d\n", num_of_coins);
	return (0);
}

