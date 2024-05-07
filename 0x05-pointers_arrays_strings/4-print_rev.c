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
	char *str;
	int i;
	
	str = s;
	while (*s != '\0')
	{
		num_chars++;
		s++;
	}

	i = num_chars - 1;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}

}


