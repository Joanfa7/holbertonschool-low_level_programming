#include <stdio.h>

/**
 * main- Program that print the number fron alphabet in reverce
 * Return: success
 */

int main(void)

{
	int letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}

