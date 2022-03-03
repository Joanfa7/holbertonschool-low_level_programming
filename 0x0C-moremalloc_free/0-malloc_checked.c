#include "main.h"

/**
 * malloc_checked- allocates memory using malloc
 * @b: ammount of space
 * Return: success
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == 0)
	{
		exit(98);
	}
	return (ptr);
}
