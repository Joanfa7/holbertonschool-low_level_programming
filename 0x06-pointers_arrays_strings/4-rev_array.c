#include "main.h"

/**
 * reverse_array- reverse an array
 * @a: pointer
 * @n: Integer
 * Return: success
 */

void reverse_array(int *a, int n)
{
	int low = 0;
	int high = n - 1;
	int temp;

	while (low < high)
	{
		temp = a[low];
		a[low] = a[high];
		a[high] = temp;
		low++;
		high--;
	}
}
