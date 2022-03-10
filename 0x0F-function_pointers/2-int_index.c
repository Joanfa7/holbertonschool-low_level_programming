#include "function_pointers.h"

/**
 * int_index- searches for an integer
 * @array: Array of integers.
 * @size: number of elements in the array
 * @cmp: pointer to the function
 * Return: success
 */

int int_index(int *array, int size, int (cmp)(int))
{
	int idx;

	if (array == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	if (cmp == NULL)
	{
		return (-1);
	}

	for (idx = 0; idx < size; idx++)
	{
		if (cmp(array[idx]) == 1)
		{
			return (idx);
		}
	}
	return (-1);
}
