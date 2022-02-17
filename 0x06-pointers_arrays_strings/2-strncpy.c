#include "main.h"

/**
 * strncpy- copies a string.
 * Return: success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return(0);
}
