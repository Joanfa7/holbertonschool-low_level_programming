#include "main.h"

/**
 * print_chessboard- prints a chess board_
 * @a: 8x8 array
 * Return: success
 */

void print_chessboard(char (*a)[8])
{
	int cont1;
	int cont2;

	for (cont1 = 0; cont1 < 8; cont1++)
	{
		for (cont2 = 0; cont2 < 8; cont2++)
		{
			if (cont2 == 7)
			{
				_putchar(a[cont1][cont2]);
				_putchar('\n');
			}
			else
			{
				_putchar(a[cont1][cont2]);
			}
		}
	}
}

