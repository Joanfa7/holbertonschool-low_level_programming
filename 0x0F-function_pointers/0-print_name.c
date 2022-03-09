#include "function_pointers.h"

/**
 * print_name- check if pointer or name are null else send name to function.
 * @f: pointer
 * @name: String/ name
 */

void print_name(char *name, void(*f)(char *c))
{
	if ((f == NULL || name == NULL))
	{
		return;
	}

	f(name);
}
