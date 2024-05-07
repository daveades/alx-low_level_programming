#include "main.h"

/**
 * _strlen - Calculates the number of chars in a str
 * @s: string to count chars
 *
 * Return: num of bytes used by s
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
