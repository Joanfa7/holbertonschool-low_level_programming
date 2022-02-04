#include <stdio.h>

/**
 * main- Program that print the number fron 0-10
 * Return: success
 */

int main(void)

{
	int Num;

	for (Num = 'z'; Num >= 'a'; Num--)
	{
		putchar(Num);
	}

	putchar('\n');
	return (0);
}

