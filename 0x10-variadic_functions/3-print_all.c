#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * @format: A string of format specifiers.
 * @...: The variadic arguments to be printed.
 * Return: void
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0;
	char *s;
	char c;
	float f;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (format[i] == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		i++;
		if (format[i])
			printf(", ");
	}

	va_end(args);
	printf("\n");
}
