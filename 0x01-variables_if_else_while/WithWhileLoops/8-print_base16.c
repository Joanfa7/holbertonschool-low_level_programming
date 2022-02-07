#include <stdio.h>

/**
 * main- Program that print the Hexnumbers
 * Return: success
 */

int main(void)

{
	char Num = '0';

	while (Num <= 'f')
	{
		if (Num >= ':' && Num <= '`')
		{
			Num++;
			continue;
		}
		putchar(Num);
		Num++;
	}

	putchar('\n');
	return (0);
}
