#include "main.h"

/**
 * _memcpy- copy memory area
 * @dest: what we copy
 * @src: what we copy it to
 * @n: the numner repetitions
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *src_char = src;
	char *dest_char = dest;

	for (i = 0; i < n; i++)
	{
		dest_char[i] = src_char[i];
	}

	return (dest);
}
