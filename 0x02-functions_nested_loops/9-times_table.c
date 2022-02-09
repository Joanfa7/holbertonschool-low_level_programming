#include "main.h"
/**
 * times_table - function that prints minutes of the day
 * Return: void nothing
 *
 */
void times_table(void)
{
	int n1, n2, n3;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			if (n2 == 0)
			{
				_putchar(48);
				continue;
			}
			n3 = n1 * n2;
			_putchar(',');
			_putchar(' ');
			if (n3 >= 10)
			{
				_putchar(n3 / 10 + 48);
				_putchar(n3 % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(n3 + 48);
			}
		}
		_putchar('\n');
	}
}
