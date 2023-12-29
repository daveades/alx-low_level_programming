#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{

	int length = 0;
	char *end = s;

	if (*s == '\0')
	{
		return (1);
	}
	length = strlen(s);

	return (is_palindrome_helper(s, length));
}

/**
 * is_palindrome_helper - Helper function for is_palindrome.
 * @s: The string to check.
 * @length: The length of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int length)
{
	if (length <= 1)
	{
		return (1);
	}

	if (*s != s[length - 1])
	{
		return (0);
	}

	return (is_palindrome_helper(s + 1, length - 2));
}
