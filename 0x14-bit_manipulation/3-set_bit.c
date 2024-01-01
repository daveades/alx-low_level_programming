#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: Pointer to the number.
 * @index: Index of the bit to set.
 *
 * Return: 1 if successful, -1 if index is out of range.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	mask = 1UL << index;
	*n |= mask;

	return (1);
}
