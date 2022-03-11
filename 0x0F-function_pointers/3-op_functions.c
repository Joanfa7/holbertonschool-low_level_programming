#include "3-calc.h"

/**
 * op_add- sum of a and b
 * @a: a number
 * @b: a number
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub- substract a from b
 * @a: a number
 * @b: a number
 * Return: resul of substract
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- multiply a and b
 * @a: a number
 * @b: a number
 * Return: result of multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- divide a from b
 * @a: a number
 * @b: a number
 * Return: result of division
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
 * op_mod- modular div between a and b
 * @a: a number
 * @b: a number
 * Return: result of modular division
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
