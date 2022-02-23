#include "main.h"

/**
 * _strspn- find length of a prefix
 * @s: where we look for similarities
 * @accept: where the similarities could be
 * Return: the number of times the expternal loop runs.
 */

unsigned int _strspn(char *s, char *accept)
{
	int idx, count;

	for (idx = 0; s[idx] != '\0'; idx++)
	{
		for (count = 0; accept[count] != s[idx]; count++)
		{
			if (accept[count] == '\0')
			{
				return (idx);
			}
		}
	}
	return (idx);
}
