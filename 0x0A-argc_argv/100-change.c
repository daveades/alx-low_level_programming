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
	int denominations[] = {25, 10, 5, 2, 1};
	int num_of_coins;
	int hierarchy;
	int change_left;

	hierarchy = 0;
	num_of_coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		change_left = atoi(argv[1]);
		if (change_left <= 0)
		{
			printf("0\n");
		}
		else
		{
			while (change_left > 0)
			{
				if (change_left >= denominations[hierarchy])
				{
					change_left -= denominations[hierarchy];
					num_of_coins += 1;
				}
				else
				{
					hierarchy++;
				}
			}
			printf("%d\n", num_of_coins);
		}
		return (0);
	}
}





