#include "main.h"

/**
 * _strcpy- copy a string
 * @dest: pinted passed
 * @src: pointed passed
 * Return: success
 */

char *_strcpy(char *dest, char *src)
{
	int count, arrayLength;

	arrayLength = 0;

	for (count = 0; src[count] != '\0'; count++)
	{
		arrayLength++;
	}

	for (count = 0; count <= arrayLength; count++)
	{
		dest[count] = src[count];
	}

	return (dest);
}
