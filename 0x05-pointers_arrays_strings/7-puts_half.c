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

	while (str[index] != '\0')
	{
		index++;
	}

	if (index % 2 != 0)
	{
		length = ((index - 1) / 2);
	}

	length = (index) / 2;
	for ( ; str[length] != '\0'; length++)
	{
		_putchar(str[length]);
	}
	_putchar('\n');
}
