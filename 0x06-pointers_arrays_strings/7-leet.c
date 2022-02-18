#include "main.h"

/**
 * leet- encode string into 1337
 * Return: encoded string
 * @s: string
 */

char *leet(char *s)
{
	int i = 0;
	int l = 0;
	char arrNum[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char arrLett[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[i] != '\0')
	{
		for (l = 0; arrLett[l] != '\0'; l++)
		{
			if (s[i] == arrLett[l])
			{
				s[i] = arrNum[l];
			}
		}
		i++;
	}
	return (s);
}
