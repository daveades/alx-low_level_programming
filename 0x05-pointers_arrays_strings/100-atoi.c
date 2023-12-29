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

	/**
	 *  Call separate function to iterate through
	 * the string and convert to integer
	 */
	result = convertStringToInt(s, i, sign);

	return (sign * result);
}


/**
* convertStringToInt - Iterates through the string and converts to integer
* @s: The string to be converted
* @start: The starting index of the string to be converted
* @sign: The sign of the integer
*
* Return: The integer value of the converted string
*/
int convertStringToInt(char *s, int start, int sign)
{
	int result = 0;

	int i;

	/* Iterate through the string */
	for (i = start; s[i] != '\0'; i++)
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
			/**
			 *  Stop parsing the string if a non-digit character is encountered after
			 * parsing a digit character
			 */
			if (result != 0)
				break;

			/* Check for consecutive signs */
			if (s[i] == '-')
				sign *= -1;
		}
	}
	return (result);
}
