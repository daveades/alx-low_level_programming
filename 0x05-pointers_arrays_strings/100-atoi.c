#include <limits.h>

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

	/* Iterate through the string */
	for (; s[i] != '\0'; i++)
	{
		/* Check if character is a digit */
		if (s[i] >= '0' && s[i] <= '9')
		{
			/* Check for overflow */
			if (result > INT_MAX / 10 || (result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
			{
				if (sign == 1)
					return INT_MAX;
				else
					return INT_MIN;
			}

			/* Convert character to integer and add to result */
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			/* Stop parsing the string if a non-digit character is encountered after parsing a digit character */
			if (result != 0)
				break;
			
			/* Check for consecutive signs */
			if (s[i] == '-')
				sign *= -1;
		}
	}

	/* Apply the sign to the result */
	result *= sign;

	return result;
}
