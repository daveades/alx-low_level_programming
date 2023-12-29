#include "main.h"

/**
* _atoi - Converts a string to an integer
* @s: The string to be converted
*
* Return: The integer value of the converted string
*/
int _atoi(char *s)
{
	int sign = 1;

	int result = 0;

	int i = 0;

	/* Check for negative sign */
	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	result = convertStringToInt(s, sign, result, i);

	/* Apply the sign to the result */
	result *= sign;

	return (result);
}


/**
 * convertStringToInt - Converts a string to an integer.
 * @s: The string to be converted.
 * @sign: The sign of the integer.
 * @result: The initial result value.
 * @i: The index of the string.
 *
 * Return: The integer value of the converted string.
 */
int convertStringToInt(char *s, int sign, int result, int i)
{
	/* Iterate through the string */
	for (; s[i] != '\0'; i++)
	{
		/* Check if character is a digit */
		if (s[i] >= '0' && s[i] <= '9')
		{
			/* Check for overflow */
			if (result > INT_MAX / 10 ||
			(result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}

			/* Convert character to integer and add to result */
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			if (result != 0)
				break;

			/* Check for consecutive signs */
			if (s[i] == '-')
				sign *= -1;
		}
	}

return (result);
}