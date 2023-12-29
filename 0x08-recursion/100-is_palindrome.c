
#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{

	if (_strlen(s) <= 1)
		return (1);


	if (s[0] == s[_strlen(s) - 1])
	{
		s[_strlen(s) - 1] = '\0';
		return (is_palindrome(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * _strlen - Returns the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	/* Base case: if the string is empty, return 0 */
	if (*s == '\0')
		return (0);

	/* Recursive case: add 1 to the length of the remaining string */
	return (1 + _strlen(s + 1));
}
