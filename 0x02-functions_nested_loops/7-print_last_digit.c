#include "main.h"

/**
 * print_last_digit- print the last digit of the given number
 * @Num: input number
 * Return: last number
 */

int print_last_digit(int Num)
{
	Num = Num % 10;

	if (Num < 0)
	{
		Num = -Num;
	}
	_putchar (Num + '0');
	return (Num);
}
