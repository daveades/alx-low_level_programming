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
	char *s;
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s != NULL)
		{
			printf("%s", s);
			if (separator != NULL && i < n - 1)
			{
				printf("%s ", separator);
			}
		}
		else
		{
			printf("(nil)");
		}
	}
	printf("\n");
	va_end(args);

}

