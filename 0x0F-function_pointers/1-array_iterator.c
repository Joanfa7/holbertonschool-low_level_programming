#include "function_pointers.h"

/**
 * array_iterator- iteratoes a function each element of an array
 * @array: array to iterate
 * @size : size of the array
 * @action: function to iterate with array
 * Return: success
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
