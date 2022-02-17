#include "main.h"

/**
 * cap_string- capitalize all words
 * @s: string
 * Return: success
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i - 1] >= 0 &&  s[i - 1] <= 47 && s[i - 1] != 45)
			{
				s[i] = s[i] - 32;
			}
			if (s[i - 1] >= 58 && s[i - 1] <= 64)
			{
				s[i] = s[i] - 32;
			}
			if (s[i - 1] == 123 || s[i - 1] == 125)
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
