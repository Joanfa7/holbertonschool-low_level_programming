#include "main.h"
int sqrt_search(int n, int aux);


/**
 * _sqrt_recursion- returns the natrual square root of a number
 * @n: variable that has the number to be operated
 * Return: success
 */

int _sqrt_recursion(int n)
{
	return (sqrt_search(n, 1));
}

/**
 * sqrt_search- search for the square root of a number
 * @n: number
 * @aux: auxiliar number
 * Return: success
 */
int sqrt_search(int n, int aux)
{
	if (aux * aux ==  n)
	{
		return (aux);
	}
	else if (aux * aux > n)
	{
		return (-1);
	}
	else
		return (sqrt_search(n, aux + 1));
}
