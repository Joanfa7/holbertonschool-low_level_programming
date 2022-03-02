#include "main.h"

/**
 * _strdup- creatin space in memory and copy a string
 * @str: string
 * Return: success
 */

char *_strdup(char *str)
{
	int i;
	int size;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	size = strlen(str);

	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= size; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
