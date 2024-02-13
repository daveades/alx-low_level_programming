#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first num
 * @b: second num
 *
 * Return: Addition of 'a' and 'b'
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds the result of subtracting a from b
 * @a: first num
 * @b: second num
 *
 * Return: the result of a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - finds the result of multiplying a by b
 * @a: first num
 * @b: second num
 *
 * Return: the result of a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - finds the result of the division of a by b
 * @a: first num
 * @b: second num
 *
 * Return: the result of a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the remainder of the division of a by b
 * @a: first num
 * @b: second num
 *
 * Return: the result of a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
