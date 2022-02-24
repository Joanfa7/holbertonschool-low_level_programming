#include "main.h"
int is_prime(int n, int Num);


/**
 * is_prime_number- evaluates if its prime or not
 * @n: variable that has the number to be operated
 * Return: success
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
 * is_prime- evaluates if its prime
 * @n: number
 * @Num: auxiliar
 * Return: success
 */

int is_prime(int n, int Num)
{
	if (n % Num == 0 || n < 2)
	{
		return (0);
	}
	else if (Num > n / 2)
	{
		return (1);
	}
	else
		return (is_prime(n, Num + 1));
}
