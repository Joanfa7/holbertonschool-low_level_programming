#include "main.h"

/**
 * _isdigit- cheks for a digit
 * @c: is a character/ number
 * Return: success
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
