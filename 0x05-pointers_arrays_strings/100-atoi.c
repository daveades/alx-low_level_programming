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
			/* Convert character to integer and add to result */
			result = result * 10 + (s[i] - '0');
		}
		else if (s[i] == '-' || s[i] == '+')
		{
			/* Check for consecutive signs */
			if (s[i] == '-')
				sign *= -1;
		}
		else
		{
			/* Skip non-digit characters */
			continue;
		}
	}

	/* Apply the sign to the result */
	result *= sign;

	return (result);
}
