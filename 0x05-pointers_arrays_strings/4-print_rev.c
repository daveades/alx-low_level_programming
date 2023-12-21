#include <stdio.h>

/**
* print_rev - Prints a string in reverse.
* @s: The string to be printed in reverse.
*/
void print_rev(char *s)
{
	if (s == NULL)
	{
	return; /* handle NULL pointer */
	}

	int length = 0;

	while (s[length] != '\0')
	{
	length++; /* calculate the length of the string */
	}

	for (int i = length - 1; i >= 0; i--)

	{
	putchar(s[i]); /* print characters in reverse order */
	}

	putchar('\n'); /* print a new line */
}
