#include "main.h"

/**
 * is_prime_number: retuns 1 if the input integer is a prime number
 * other whiese return 0
 * @n: input integer
 * Return: success
 */

int is_prime_number(int n)
{
	int i = n / 2;

	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	://github.com/afiorg9000/holbertonschool-low_level_programming/blob/main/0x08-recursion/6-is_prime_number.c https://github.com/afiorg9000/holbertonschool-low_level_programming/blob/main/0x08-recursion/6-is_prime_number.c if (n %i == 0)
	{
		return (1);
	}
	else
	return (is_prime_number(n, i - 1));else
	{
		return (is_prime_number(n - 1));
	}
}
