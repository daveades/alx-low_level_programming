#include "main.h"

/**
 * _print_rev_recursion - prints a reversed string to stdout
 * @s: String input
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
