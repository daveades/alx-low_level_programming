#include "main.h"

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	char *num1;

	char *num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (validate_input(num1) != 0 || validate_input(num2) != 0)
	{
		return (98);
	}

	multiply_numbers(num1, num2);

	return (0);
}


/**
 * validate_input - Validates if a string contains only digits.
 * @num: The string to validate.
 *
 * Return: 0 if the string contains only digits, otherwise 98.
 */
int validate_input(char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
	{
		if (num[i] < '0' || num[i] > '9')
		{
			printf("Error\n");
			return (98);
		}
	}

	return (0);
}

/**
 * multiply_numbers - Multiplies two numbers represented as strings.
 * @num1: The first number.
 * @num2: The second number.
 */
void multiply_numbers(char *num1, char *num2)
{
	int len1, len2, start;

	int *result, result_len;

	len1 = 0;
	len2 = 0;

	while (num1[len1] != '\0')
	{
		len1++;
	}

	while (num2[len2] != '\0')
	{
		len2++;
	}

	result_len = len1 + len2;
	result = calloc(result_len, sizeof(int));

	if (result == NULL)
	{
		printf("Error\n");
		return;
	}

	calculate_result(num1, num2, result, len1, len2);

	start = 0;
	while (start < result_len && result[start] == 0)
	{
		start++;
	}

	print_result(result, start, result_len);

	free(result);
}

/**
 * calculate_result - Calculates the result of multiplying two numbers.
 * @num1: The first number.
 * @num2: The second number.
 * @result: The array to store the result.
 * @len1: The length of num1.
 * @len2: The length of num2.
 */
void calculate_result(char *num1, char *num2, int *result, int len1,
					  int len2)
{
	int i, j;

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
			result[i + j] += result[i + j + 1] / 10;
			result[i + j + 1] %= 10;
		}
	}
}

/**
 * print_result - Prints the result of multiplying two numbers.
 * @result: The array containing the result.
 * @start: The starting index of the result array.
 * @result_len: The length of the result array.
 */
void print_result(int *result, int start, int result_len)
{
	int i;

	if (start == result_len)
	{
		printf("0\n");
	}
	else
	{
		for (i = start; i < result_len; i++)
		{
			printf("%d", result[i]);
		}
		printf("\n");
	}
}

