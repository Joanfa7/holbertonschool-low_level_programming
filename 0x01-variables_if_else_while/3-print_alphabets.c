#include <stdio.h>

/**
 * main- The programs print the alphabet in lower and upper case
 * Return: Success
 */

int main(void)
{
	for (int letter = 'a'; letter <= 'z' ; letter++)
	{
		putchar(letter);
	}

	for (int Letter = 'A'; Letter <= 'Z' ; Letter++)
	{
		putchar(Letter);
	}

	putchar('\n');
	return (0);
}
