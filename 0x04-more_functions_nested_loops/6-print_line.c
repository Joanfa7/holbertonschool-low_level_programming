#include "main.h"

/**
 * print_line- draws a straight line int the terminal
 * Retrun: success
 * @n: number
 */

void print_line(int n)
{
	int Num = 0;

	while (Num <= n)
	{
		if (n > 0 )
		{
			_putchar('_');
			if (Num == n)
				_putchar('$');
			Num++;
		}
		Num++;
	}
	_putchar('\n');

	if(n <= 0)
		_putchar('$');
	_putchar('\n');
}
