#include "main.h"

/**
 * _isdigit - checks if a char is a digit
 * @c: The char to be checked
 *
 * Return: 1 if it is a digit, otherwise 0
 */

int _isdigit(int c)
{
	int digit;
	int retval;

	retval = 0;
	for (digit = '0'; digit <= '9'; digit++)
	{
		if (c == digit)
		{
			retval = 1;
			break;
		}
		return (retval);
	}
}
