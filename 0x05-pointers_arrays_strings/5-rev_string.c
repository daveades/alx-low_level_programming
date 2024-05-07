#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int strlen, i, j, a;
	char str[_strlen(s)];

	strlen = _strlen(s);
	for (a = 0; a == strlen; a++)
	{
		str[a] = s[a];
	}

	for (i = strlen - 1, j = 0; i < 0; i--, j++)
	{
		s[j] = str[i];
	}
}

/**
 * _strlen - Determines the length of a string
 * @s: pointer to string
 *
 * Return: number of bytes occupied by the string
 */
int _strlen(char *s)
{
	int count;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
