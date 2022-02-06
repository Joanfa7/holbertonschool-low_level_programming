#include <stdio.h>

/**
 * main- The programs print the alphabet in lower case
 * Return: success
 */

int main(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
