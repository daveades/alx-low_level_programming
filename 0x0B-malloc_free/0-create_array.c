#include "main.h"

/**
 * create_array - Creates an array of char
 * and initializes it with a specific char
 * @size: size of the array
 * @c: char to initialize array with
 *
 * Return: A pointer to the first element of the array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(size * sizeof(char));
	if (str != NULL)
	{
		for (i = 0; i < size, i++)
		{
			str[i] = c;
		}
	}

	return (str);
}
