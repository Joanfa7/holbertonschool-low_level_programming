#include "main.h"

/**
 * print_line- draws a straight line int the terminal
 * Retrun: success
 * @n: number
 */

void print_line(int n)
{
	int Num = 0;

	if (n > 0)
	{
		while (Num < n)
		{
			_putchar('_');
			Num--;
		}
		putchar('\n');
	}
}
