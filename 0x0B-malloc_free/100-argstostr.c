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
	if (ac == 0 || av == NULL)
		return (NULL);

	int total_length;
	int i, j, k;
	char *concatenated_str;

	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			total_length++;
		total_length++;
	}

	concatenated_str = malloc(sizeof(char) * (total_length + 1));

	if (concatenated_str == NULL)
		return (NULL);

	/* Copy the arguments into the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated_str[k] = av[i][j];
			k++;
		}
		concatenated_str[k] = '\n';
		k++;
	}
	concatenated_str[k] = '\0';

	return (concatenated_str);
}
