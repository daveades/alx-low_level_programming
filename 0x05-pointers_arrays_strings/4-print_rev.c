#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int num_chars = 0;
	int i;

	while (*s != '\0')
	{
		num_chars++;
		s++;
	}
	for (i = num_chars - 1; i < 0; i--)
	{
		_putchar(s[i]);
	}
}


