#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed into the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned in i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(args, char *));
		if (separator != NULL && i < n - 1)
		{
			printf("%s ", separator);
		}
		printf("\n");
	}
	va_end(args);

}

