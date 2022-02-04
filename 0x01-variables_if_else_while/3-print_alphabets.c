#include <stdio.h>

/**
 * main- The programs print the alphabet in lower and upper case
 * Return: Success
 */

int main(void)
{
	int letter;
	int Letter;

	for (letter = 'a'; letter <= 'z' ; letter++)
	{
		putchar(letter);
	}

	for (Letter = 'A'; Letter <= 'Z' ; Letter++)
	{
		putchar(Letter);
	}

	putchar('\n');
	return (0);
}
