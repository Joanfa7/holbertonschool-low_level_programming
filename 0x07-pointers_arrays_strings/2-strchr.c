#include "main.h"

/**
 * _strchr- locates a character in a string
 * @s: string to be evaluated
 * @c: variable that stors the located character
 * Return: success
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);

}