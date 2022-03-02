#include "main.h"

/**
 * create_array- creates an array of chars
 * @size: lenth of string
 * @c: character value
 * Return: string
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(size * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
