#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- displays random numbers and tells if they are positive, negative or 0
 * Return: succes
 */
int main(void)
{
	int n, LastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LastNum = n % 10;

	if (n > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, LastNum);
	}
	if (n == 0)
	{
		printf("Last digit of %i and is %i and is 0\n", n, LastNum);
	}
	if (n < 6)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, LastNum);
	}

	return (0);
}
