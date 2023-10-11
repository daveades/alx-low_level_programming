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
	int *arr;

	if (size == 0)
	{
		return (NULL);
	}
	if  (arr == NULL)
	{
		return (NULL);
	}
	arr = (char *)malloc(sizeof(char) * 98);
	arr[0] = c;
	return (arr);
}



