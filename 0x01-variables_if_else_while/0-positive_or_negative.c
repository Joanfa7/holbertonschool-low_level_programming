#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- Program defines if a number is negative, positive or zero
 * Return: the value of the number
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	if (n < 0)
	{
		printf("%i is negavtive\n", n);
	}
	return (0);
}
