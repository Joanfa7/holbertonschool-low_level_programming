#include "main.h"

/**
 * _strcat- concatenates two strings dest and src
 * Return: dest
 * @dest: String 1
 * @src: String 2
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int l = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[l] != '\0')
	{
		dest[i] = src[l];
		i++;
		l++;
	}
	return (dest);
}
