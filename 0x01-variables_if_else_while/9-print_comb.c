#include <stdio.h>

/**
 * main- Program that print the number fron 0-10
 * Return: success
 */

int main(void)

{
	int Num;

	for (Num = 48; Num <= 57; Num++)
	{
		putchar(Num);
		if (Num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
