#include "main.h"

/**
 * swap_int- swap the value of two integers
 * @a: integer
 * @b: integer
 * Return: Success
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
