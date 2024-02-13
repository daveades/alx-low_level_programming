#include "3-calc.h"

/**
 * get_op_func - gets the appropriate function the user needs
 * based on the operator user selects
 * @s: string of operator
 *
 * Return: A function pointer to the appropriate function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;
	while (s != NULL && s[1] == '\0' && i < 5)
	{
		if (*s == *(ops[i].op))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}

