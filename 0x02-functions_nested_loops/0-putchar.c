#include "main.h"

/**
 * main- prints _putchar
 * Return: succes
 */

int main(void)
{
	char str[9] = "_putchar";
	int letter;

	for (letter = 0 ; str[letter] != '\0'; letter++)
	{
		_putchar(str[letter]);
	}
	_putchar('\n');
	return (0);
}
