#include "3-calc.h"

/**
 * op_add - performs addition
 * @a: first operand
 * @b: second operand
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - performs subtraction
 * @a: first operand
 * @b: second operand
 *
 * Return: difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - performs multiplication
 * @a: first operand
 * @b: second operand
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - performs division
 * @a: first operand
 * @b: second operand
 *
 * Return: result of division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - performs modulo operation
 * @a: first operand
 * @b: second operand
 *
 * Return: remainder of division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
