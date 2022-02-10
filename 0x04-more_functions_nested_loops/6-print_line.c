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
		if(n > 0 )
		{
			_putchar('_');
			if(Num == n)
				_putchar('$');
			Num++;
		}
		else if(Num <= 0)
			_putchar('$');
		Num++;
	}
	_putchar('\n');

}
