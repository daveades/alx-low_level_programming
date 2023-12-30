#include "variadic_functions.h"

/**
 * print_all - Prints values based on a given format.
 * @format: The format string.
 * ...
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *s, c;
	float f;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
					break;
				printf("%s", s);
				break;
		}
		if (format[i + 1] != '\0' && (format[i] == 'c' ||
		 format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
