#include "3-calc.h"


/**
 * op_add - adds two ints.
 * @a: first int.
 * @b: second int.
 *
 * Return: addition.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two intergers.
 * @a: first int
 * @b: second int.
 *
 * Return: subtraction.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two intergers.
 * @a: first int
 * @b: second int
 *
 * Return: multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two intergers.
 * @a: first int
 * @b: second int.
 *
 * Return: division.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the module of two intergers
 * @a: first int.
 * @b: second int
 *
 * Return: remainder/modulas.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
