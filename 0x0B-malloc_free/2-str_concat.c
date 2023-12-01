#include "main.h"

char *str_concat(char *s1, char *s2)
{
	int total_size, i, size_1, size_2;
	int second_string_index;
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
	second_string_index = 0;
	for(i = size_1; i < total_size - 1; i++)
	{
		str_concat[size_1] = s2[second_string_index];
		second_string_index++;
	}
	str_concat[total_size - 1] = '\0';
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

	if (str == NULL)
	{
		return (0);
	}

	len = 0;
	while (str[len] != 0)
	{
		len++;
	}
	return (len);
}
