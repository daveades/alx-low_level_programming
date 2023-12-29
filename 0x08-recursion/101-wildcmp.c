#include "main.h"
/**
* wildcmp - Compares two strings and returns 1
*           if the strings can be considered identical,otherwise returns 0.
* @s1: The first string to compare.
* @s2: The second string to compare.
*
* Return: 1 if the strings are identical, 0 otherwise.
*/

int wildcmp(char *s1, char *s2)
{
	/* If both strings are empty, they are considered identical */
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		else if (*s1 == '\0')
		{
			return (wildcmp(s1, s2 + 1));
		}
		else if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}
		else
		{
			return (wildcmp(s1 + 1, s2));
		}
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	/* If none of the above conditions are met, the strings are not identical */
	return (0);
}
