# include "main.h"

/**
 * _islower - check if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	char ch;
	int retval;

	retval = 0;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == c)
		{
			retval = 1;
			break;
		}
	return (retval);
}
