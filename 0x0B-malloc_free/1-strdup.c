#include "main.h"

/**
 * _strdup -  Allocates a memory
 * and copies into it a specified string
 * @str: string to be copied
 *
 * Return: NULL if fail else return pointer to char*
 */
char *_strdup(char *str)
{
	char *new_str;
	int size;

	if (*str == NULL)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;
	new_str = malloc(sizeof(char) * size);

	for (i = 0; i < size - 1; i++)
	{
		new_str[i] = str[i];
	}
	str[size] = '\0';


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
	return (len)
}

