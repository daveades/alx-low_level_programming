#include "main.h"
#include <stddef.h>

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
