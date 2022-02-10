#include "main.h"

/**
 * print_line- draws a straight line int the terminal
 * Retrun: success
 * @n: number
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n < 0)
		{
			_putchar('_');
			Num--;
		}
		putchar('\n');
	}
}
