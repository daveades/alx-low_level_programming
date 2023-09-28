#include "main.h"

/**
 * _puts_recursion - prints a string input
 * @s: String value
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s = s + 1;
	if (*s != 0)
	{
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}

