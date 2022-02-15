#include "main.h"

/**
 * puts_half- puts_half- print half of a string.
 * Return: succes
 * @str: given string.
 */

void puts_half(char *str)
{
	int index = 0;
	int length;

	for ( ; str[index] != '\0'; index++)
	{
	}
		length = (index) / 2;

	for ( ; str[length] != '\0'; length++)
	{
		_putchar(str[length]);
	}
	_putchar('\n');
}
