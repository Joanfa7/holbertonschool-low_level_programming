#include "main.h"

/**
 * _strpbrk- search a string for any of a set of bytes
 * @s: evaluated string
 * @accept: matching string
 * Return: success
 */

void print_chessboard(char (*a)[8])
{
	int cont1;
	int cont2;

	for (cont1 = 0; a[cont1] != '\0'; cont1++)
	{
		for (cont2 = 0; accept[cont2] != '\0'; cont2++)
		{
			_putchar(cont2);
		}
		_putchar(cont1);
	}
}
