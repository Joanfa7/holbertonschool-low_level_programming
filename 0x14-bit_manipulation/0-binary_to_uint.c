#include "main.h"

/**
 * binary_to_uint - convert binary to integer
 * @b: poiter
 * Return: success
 */

unsigned int binary_to_uint(const char *b)
{
	int idx = 0;
	unsigned int uint = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[idx] != '\0')
	{
		if (b[idx] == '0' || b[idx] == '1')
		{
			uint <<= 1;
			uint += b[idx] - '0';
			idx++;
		}
		else
			return (0);
	}
	return (uint);
}


