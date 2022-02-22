#include "main.h"

/**
 *
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int idx;

	while (*s)
	{
		for (idx = 0; accept[idx]; idx++)
		{
			if( s[idx] != accept[idx])
				break;
		}
		if (!accept[idx])
		{
			return (*s);
		}
		s++;
	}
	return(*s);
}
