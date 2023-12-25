#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the diagonals of a square matrix.
 * @a: Pointer to the square matrix.
 * @size: Size of the matrix.
 */
void print_diagsums(int *a, int size)
{

	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	/* Calculate the sum of the first diagonal */
	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
	}

	/* Calculate the sum of the second diagonal */
	for (i = 0; i < size; i++)
	{
		sum2 += *(a + i * size + (size - i - 1));
	}

	/* Print the sums */
	printf("Sum of the first diagonal: %d\n", sum1);
	printf("Sum of the second diagonal: %d\n", sum2);
}
