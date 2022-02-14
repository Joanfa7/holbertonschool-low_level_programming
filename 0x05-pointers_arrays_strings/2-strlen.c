include "main.h"

/**
 * _strlen- returns the lenght of a string
 * Return: length
 * @s: string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
