#include "main.h"

/**
 * print_sign- of of a number
 * @n: number
 * Return: succes
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
		_putchar ('0');
	}
	else
	{
		_putchar('-');
		return (-1);
		_putchar ('-');
	}
}
