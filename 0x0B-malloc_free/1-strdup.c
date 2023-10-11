#include <stdlib.h>
int _strlen (char *str);

/**
 * _strdup -duplicates a string and returns a pointer to the duplicate
 * @str: string to be duplicated
 *
 * Return: NULL if error else, char*
 */
char *_strdup(char *str)
{
	char *new_string;
	int i;
	int string_length;

	if (str == NULL)
	{
		return (NULL);
	}
	string_length = _strlen(str);
	new_string  = (char *)malloc((sizeof(char) * string_length) + sizeof(char));
	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= string_length; i++)
	{
		new_string[i] = str[i];
	}
	return (new_string);
}

/**
 * _strlen - Calculates the length of a string
 * @str: pointer to string
 *
 * Return: lenght of string
 */
int _strlen(char *str)
{
	int length;

	length = 0;
	if (*str == 0)
	{
		return (0);
	}
	while (*str != 0)
	{
		length++;
		str++;
	}
	return (length);
}
