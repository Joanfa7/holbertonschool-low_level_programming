#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n, LastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LastDigit = n % 10;

	if (n > 5)
	{
		printf("Last digit of %i and is %i greater than 5\n", n, LastNum);
	}
	if (n == 0)
	{
		printf("Last digit of %i and is %i\n", n, LastNum);
	}
	if (n < 6)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, LastNum);
	}



	return (0);
}
