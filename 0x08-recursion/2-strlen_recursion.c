#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	/* Base case: if the string is empty, return 0 */
	if (*s == '\0')
		return (0);

	/* Recursive case: add 1 to the length of the remaining string */
	return (1 + _strlen_recursion(s + 1));
}
