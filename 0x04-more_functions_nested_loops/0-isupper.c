#include "main.h"

/**
 * _isupper - Check if char is uppercase
 * @c: The char to be checked
 *
 * Return: 1 if char is uppercase, otherwise 0
 */

int _isupper(int c)
{
	char ch;
	int retval;

	retval = 0;
	ch = 'A';
	while (ch <= 'Z')
	{
		if (c == ch)
		{
			retval = 1;
			break;
		}
		ch++;
	}
	return (retval);
}

