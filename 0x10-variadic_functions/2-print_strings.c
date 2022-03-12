#include "variadic_functions.h"

/**
 * print_strings- prints a tring
 * @separator: string separator
 * @n: parameter
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int idx;
	char *s;
	va_list list;

	va_start(list, n);

	for (idx = 0; idx < n; idx++)
	{
		s = va_arg(list, char *);

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}

		if (separator != NULL && idx < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
