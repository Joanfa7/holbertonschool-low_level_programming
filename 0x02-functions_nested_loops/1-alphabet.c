#include "main.h"

/**
 * print_alphabet- print the alpahbet
 * Return: success
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');

}
