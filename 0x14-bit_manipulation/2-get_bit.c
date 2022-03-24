#include "main.h"

/**
 * get_bit- return value of a bit
 * @n: integer
 * @index: integer
 * Return: success
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int result;

	if (index > sizeof(n) * 8)
		return (-1);

	result = (n >> index) & 1;

	return (result);
}
