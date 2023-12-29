#include "main.h"

/**
* print_rev - Prints a string in reverse.
* @s: The string to be printed in reverse.
*/
void print_rev(char *s)
{
	int length;
	int i; /* Declare the loop variable before the loop */

	length = 0;
	if (s == NULL)
	{
		return;
	}


	while (s[length] != '\0')
	{
		length++; /* calculate the length of the string */
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]); /* print characters in reverse order */
	}

	_putchar('\n'); /* print a new line */
}
