#include "function_pointers.h"

/**
 * int_index -  Searches for an integer in an array of integers
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to function that actually searches for the integer
 *
 * Return: index of the found integer or -1 if fail
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array != NULL && cmp != NULL)
	{

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}

