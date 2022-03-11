#include "function_pointers.h"

/**
 * op_add- sum of a and b
 * @a: a number
 * @b: a number
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	int result:

	result = (a + b);
	return(result);
}

/**
 * op_sub- substract a from b
 * @a: a number
 * @b: a number
 * Return: resul of substract
 */

int op_sub(int a, int b)
{
	int result;

	result = (a - b);
	return(result);
}

/**
 * op_mul- multiply a and b
 * @a: a number
 * @b: a number
 * Return: result of multiplication
 */

int op_mul(int a, int b)
{
	int result;

	result = (a * b);
	return (result);
}

/**
 * op_div- divide a from b
 * @a: a number
 * @b: a number
 * Return: result of division
 */

int op_div(int a, int b)
{
	int result;

	result = (a / b);
	return (result);
}

/**
 * op_mod- modular div between a and b
 * @a: a number
 * @b: a number
 * Return: result of modular division
 */
int op_mod(int a, int b)
{
	int result;

	result = (a % b);
	return (result);
}
