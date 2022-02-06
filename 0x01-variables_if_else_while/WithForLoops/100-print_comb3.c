#include <stdio.h>

/**
 * main- it prints all possible different combinations of two digits
 * Return: Success
 */

int main(void)
{
	int n, d;

	for (d = '0'; d < '9' ; d++)
	{
		for (n = d + 1; n <= '9' ; n++)
		{
			if (n != d)
			{
				putchar(d);
				putchar(n);
				if (n == '9' && d == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
