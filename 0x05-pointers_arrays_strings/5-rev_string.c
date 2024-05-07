#include "main.h"
#include <stddef.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	char *start = s;
	char *end = s;
	char temp;

	if (s == NULL)
	{
		return;
	}

	while (*end != '\0')
	{
		end++;
	}

	end--;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		end--;
		start++;
	}
}
