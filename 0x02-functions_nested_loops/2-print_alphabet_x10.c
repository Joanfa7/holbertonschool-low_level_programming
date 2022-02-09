#include "main.h"

/**
 * print_alphabet_x10- print the alpahbet ten times
 * Return: success
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	char rep;

	for (rep = 0; rep <= 9; rep++)
	{
		for (letter = 'a' ; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
