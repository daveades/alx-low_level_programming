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
	char *concatenated_str;

	total_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

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
	concatenated_str = malloc(sizeof(char) * (total_length + 1));
	if (concatenated_str == NULL)
		return (NULL);

	/* Copy the arguments into the concatenated string */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated_str[k++] = av[i][j];
		}
		concatenated_str[k++] = '\n';
	}
	concatenated_str[k] = '\0';

	return (concatenated_str);
}
