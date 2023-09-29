#include "main.h"

int _strlen(char *addr);
int check_char(char *ptrfc, char *ptrlc, char *strtptr);

/**
 * is_palindrome - checks whether a string is palindrome
 * @s: the string to check
 *
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	return (check_char(s, s + (_strlen(s) - 1), s));
}

/**
 * _strlen - Checks the length of a string
 *@addr: The string whose length to check
 *
 * Return: 0 or 1
 */
int _strlen(char *addr)
{
	if (*addr == 0)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(addr + 1));
	}
}

/**
 * check_char -Checks string against each other
 * to see if the match moving from opposite directions
 * @ptrfc: pointer to first char
 * @ptrlc: pointer to last char
 * @strtptr: pointer to string (Start position)
 *
 * Return: 0 or 1.
 */
int check_char(char *ptrfc, char *ptrlc, char *strtptr)
{
	if (ptrlc < strtptr)
	{
		return (1);
	}

	else if (*ptrlc == *ptrfc)
	{
		return (check_char(ptrfc + 1, ptrlc - 1, strtptr));
	}
	else
	{
		return (0);
	}
}
