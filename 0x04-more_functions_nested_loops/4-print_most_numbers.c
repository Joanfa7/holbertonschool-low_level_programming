#include "main.h"

/**
 * print_most_numbers- print the numbers form 0 to 9 except 2 and 4
 * Return: Success
 */

void print_most_numbers(void)
{
	int Num = 48;

	while (Num <= 57)
	{
		if (Num != 50 && Num != 52)
		{
		_putchar(Num);
		}
		Num++;
	}
	_putchar('\n');
}
