#include "main.h"

char *str_concat(char *s1, char *s2)
{
	int size, i, total_size_1, size_2;
	char *str_concat;

	size_1 = _strlen(s1);
	size_2 = _strlen(s2);
	total_size  = size_1 + size_2 + 1;;

	str_concat = malloc(sizeof(char) * total_size);
	if (str_concat ==  NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size_1; i++)
	{
		str_concat[i] = s1[i];
	}
	for(i = size_1, i < size - 1; i++)
	{
		str_concat[i] = s2[i];
	}
	return(str_concat);
}

/**
 * _strlen -  Determines string length
 * @str: pointer to string array
 *
 * Return: length of string in int
 */
int _strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != 0)
	{
		len++;
	}
	return (len);
}
