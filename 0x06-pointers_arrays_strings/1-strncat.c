#include "main.h"

/**
 * _strncat- concatentates two strings
 * Return: dest
 * @n: misterious variable.
 * @dest: String 1
 * @src: String 2
 */


char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int l = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[l] != '\0' && l < n)
	{
		dest[i] = src[l];
		l++;
		i++;
	}
	return (dest);
}
