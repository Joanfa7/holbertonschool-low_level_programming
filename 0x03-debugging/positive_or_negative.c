#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main- Program defines if a number is negative, positive or zero
 * Return: the value of the number
 */
void positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%i is positive\n", i);
	}
	if (i == 0)
	{
		printf("%i is zero\n", i);
	}
	if (i < 0)
	{
		printf("%i is negative\n", i);
	}
}
