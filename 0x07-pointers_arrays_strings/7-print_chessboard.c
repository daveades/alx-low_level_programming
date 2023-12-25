#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: The chessboard array.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	char character;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			character = a[i][j];
			_putchar(character);
		}
		_putchar('\n');
	}
}
