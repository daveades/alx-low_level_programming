#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a lsit of the types of the inputs args
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int index;

	va_start(args, format);
	while (format)
	{
		switch (format[index])
		{
			case 'c':
				printf("%c", va_arg(args, char));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				if (s != NULL)
				{
					printf("%s", va_arg(args, char *));
					break;
				}
				printf("(nil)");
				break;
		}
		if (format[index + 1] != '\0' && (format[index] == 'c'
					|| format[index] == 'i' || format[index] == 'f' || format[index] == 's'))
		{
			printf(", ");
		}
		index++;
	}
}
