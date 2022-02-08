#include "main.h"
/**
 * _islower- checks if the char is lowecase
 * Return: Succes
 * @c: letter
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
