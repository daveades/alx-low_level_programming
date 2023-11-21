#include "main.h"

/**
 * main - prints minimum number of coins needed
 * to give a certain amount of change
 * @argc: number of args
 * @argv: amount of change
 *
 * Return: 0 or 1 depending on num of args
 */
int main(int argc, char **argv)
{
	int coins[] = {25, 10, 5, 2, 1};
	int num_of_coins, value, amount;

	value = 0;
	num_of_coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	while (amount > 0)
	{
		if (amount  >= coins[value])
		{
			amount -= coins[value];
			num_of_coins += 1;
		}
		else
		{
			value++;
		}
	}
	printf("%d\n", num_of_coins);
	return (0);
}
