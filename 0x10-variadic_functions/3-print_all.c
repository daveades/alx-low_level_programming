#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of input args
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int index = 0;
	char *s;

	va_start(args, format);
	while (format && format[index])
	{
		switch (format[index])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s != NULL)
				{
					printf("%s", s);
					break;
				}
				printf("(nil)");
				break;
		}
		if (format[index + 1] != '\0' &&  (format[index] == 'c' ||
					format[index] == 'i' || format[index] == 'f' || format[index] == 's'))
		{
			printf(", ");
		}
		index++;
	}
	va_end(args);
	printf("\n");
}
