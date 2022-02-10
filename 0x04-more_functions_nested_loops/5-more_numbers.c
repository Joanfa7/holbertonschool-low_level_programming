#include "main.h"

/**
 * 
 *
 */

void more_numbers(void)
{
	int Num;
	int Rep;

	for (Rep = 0; Rep < 10; Rep++)
	{
		for(Num = 0; Num < 15; Num++)
		{
			if(Num > 9)
			_putchar((Num / 10) + '0');
			_putchar((Num % 10) + '0');
		}
		_putchar('\n');
	}
}
