#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: the operator passed as argument to the program
 *
 * Return: pointer to the function that corresponds to the operator,
 *         or NULL if no match is found
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	int (*ops[5])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod};
	char operators[5] = {'+', '-', '*', '/', '%'};

	i = 0;
	while (i < 5)
	{
		if (*s == operators[i])
			return (ops[i]);
		i++;
	}

	return (NULL);
}