#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int total_length;
	int i, j, k;
	char *result;

	total_length = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_length++;
		}
		total_length++; /* Account for the newline character */
	}

	/* Allocate memory for the concatenated string */
	result = malloc(sizeof(char) * (total_length + 1));

	if (result == NULL)
	{
		return (NULL);
	}

	/* Copy the arguments into the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[k++] = av[i][j];
		}
		result[k++] = '\n';
	}
	result[k] = '\0'; /* Add the null terminator */

	return (result);
}
