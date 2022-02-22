#include "main.h"

/**
 * _strpbrk- search a string for any of a set of bytes
 * @s: evaluated string
 * @accept: matching string
 * Return: success
 */

char *_strpbrk(char *s, char *accept)
{
	int cont1;
	int cont2;

	for (cont1 = 0; s[cont1] != '\0'; cont1++)
	{
		for (cont2 = 0; accept[cont2] != '\0'; cont2++)
		{
			if (accept[cont2] == s[cont1])
			{
				return (&s[cont1]);
			}
		}
	}
	return (NULL);
}
