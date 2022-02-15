#include "main.h"

/**
 *_puts- prints a string
 * Return: success
 * @s: given string
 */

void _puts(char *s)
{
	int ch;

	for (ch = 0; s[ch] != '\0'; ch++)
	{
		_putchar(s[ch]);
	}
	_putchar('\n');
}
