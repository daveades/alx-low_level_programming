#include "variadic_functions.h"

/**
 * print_all - Prints values based on a given format.
 * @format: The format string.
 * ...
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int index = 0;
	char *s;
	int i;
	float f;

	va_start(args, format);
	while (format && format[index])
	{
		switch (format[index])
		{
			case 'c':
				i = va_arg(args, int);
				printf("%c", i);
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
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		if (format[index + 1] != '\0' && (format[index] == 'c' ||
		 format[index] == 'i' || format[index] == 'f' || format[index] == 's'))
			printf(", ");
		index++;
	}
	va_end(args);
	printf("\n");
}