#include "main.h"

/**
 * print_name - Prints a name using a function pointer
 * @name: The name to be printed
 * @f: Pointer to the function that prints the name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
