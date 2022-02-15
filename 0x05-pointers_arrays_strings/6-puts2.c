#include "main.h"

/**
 * puts2- prints the pares
 * Return: success
 * @str: string
 */

void puts2(char *str)

{
	int idx;

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		if (str[idx] % 2 == 0)
			_putchar(str[idx]);
	}
	_putchar('\n');
}

