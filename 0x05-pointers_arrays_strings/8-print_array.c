#include <stdio.h>

/**
 * print_array- prints n elements of an array of integers.
 * Return: success
 * @a: pointer
 * @n: number of elements in an array
 */

void print_array(int *a, int n)
{

	int idx = 0;

	for ( ; idx <= (n - 1); idx++)
	{
		if (n != (n - 1))
		{
			printf("%d, ", a[idx]);
		}
		else
			printf("%d", a[idx]);
	}
	printf("\n");
}
