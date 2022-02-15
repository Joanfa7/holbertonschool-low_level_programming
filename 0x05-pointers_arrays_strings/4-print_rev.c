#include "main.h"

/**
 * print_rev- prints a string, in reverse, followed by a new line.
 * @s: string to be printed.
 */

void print_rev(char *s)
{
	int p = 0;

	while (s[p] != '\0')
		p++;

	while(p)
		putchar(s[--p]);

	_putchar('\n');
}
