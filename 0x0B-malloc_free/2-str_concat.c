#include "main.h"

/**
 * str_concat- concatenate two strings
 * @s1: string
 * @s2: string
 * Return: success
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, SumSize;
	int i, n;
	char *ptr;

	size1 = strlen(s1);
	size2 = strlen(s2);
	SumSize = size1 + size2;

	ptr = malloc(SumSize * sizeof(char) + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= size1; i++)
	{
		ptr[i] = s1[i];
		n = i;
	}
	for (i = 0; i < size2; i++)
	{
		ptr[n] = s2[i];
		n++;
	}
	return (ptr);
}
