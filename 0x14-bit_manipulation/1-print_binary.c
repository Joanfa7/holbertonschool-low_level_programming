#include "main.h"


/**
 * print_binary - function prints out binary number
 * @n: integer
 */

void print_binary(unsigned long int n)
{
	for (; n > 1;)
	{
		n = n >> 1;
		_putchar((n & 1) + 48);
	}

	if (n & 1)
	{
		_putchar('1');
	}

	else
	{
		_putchar('0');
	}
}


