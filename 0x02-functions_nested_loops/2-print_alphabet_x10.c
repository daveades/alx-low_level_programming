# include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	int i;
	char alphabet;

	for (i = 1; i <= 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		putchar('\n');
	}
}
