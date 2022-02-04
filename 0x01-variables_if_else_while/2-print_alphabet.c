#include <stdio.h>

/**
 * main- The programs print the alphabet in lower case
 * Return: The alphabet
 */

int main()
{
	int letter;

	for( letter = 'a'; letter <= 'z' ; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
