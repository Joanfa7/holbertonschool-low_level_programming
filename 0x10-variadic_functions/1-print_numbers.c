#include "variadic_functions.h"

/**
 * print_numbers- print all numbers
 * @separator: array of char
 * @n: numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int idx;
	va_list args;

	va_start(args, n);
	for (idx = 0; idx < n; idx++)
	{
		if (separator && idx != n - 1)
		{
			printf("%i%s", va_arg(args, int), separator);
		}
		else
			printf("%i", va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
