#include "search_algos.h"

/**
 * binary_search- Searches for a value in a sorted array of integers
 * @array: is a pointer to the firts element of the array to seach
 * @size: is the number of elements in array
 * @value: is the calue to search fo
 * Return: value if it exist in the array
 */

int binary_search(int *array, size_t size, int value)
{
	size_t min = 0;
	size_t max = size - 1;
	size_t i;
	size_t j;

	while (min <= max)
	{
		i = (min + max) / 2;
		if (i == min)
		{
			return (-1);
		}

		printf("Searching in array: ");
		for (j = min; j <= max ; j++)
		{
			if (j < max)
			{
				printf("%i, ", array[j]);
			}
			else
				printf("%i\n", array[j]);
		}
		if (array[i] < value)
		{
			(min) = i;
		}
		else if (array[i] > value)
		{
			max = i;
		}
		else
			return (array[i]);
	}
	return (-1);
}
