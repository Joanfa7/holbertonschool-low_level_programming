#include <stdio.h>

/**
 * main- prints the alphabet but skips q and e
 * Return: success
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
		putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
