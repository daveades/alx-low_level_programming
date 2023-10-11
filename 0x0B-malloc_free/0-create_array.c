#include <stdlib.h>

/**
 * create_array - creates an array with a specified size
 * and initializes it with a char
 * @size: size of array
 * @c: value to initialize arr with
 *
 * Return: NULL if error else return arr
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(sizeof(char) * size);
	if  (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}



