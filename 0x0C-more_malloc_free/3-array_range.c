#include "main.h"

/**
 * array_range- crate an array of integers
 * @min: minimum space for array
 * @max: maximum space for array
 * Return: success
 */

int *array_range(int min, int max)
{
	int i, *n;

	if (min > max)
	{
		return (NULL);
	}

	n = malloc(sizeof(int) * (max - min + 1));

	if (n == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		n[i] = min++;
	}
	return (n);
}

