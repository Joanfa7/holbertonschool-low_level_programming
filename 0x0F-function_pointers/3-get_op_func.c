#include "function_pointers.h"

/**
 * get_op_func- selects the correct function to perform
 * @s: o
 */

int (get_op_func(char *s))(int, int)
{
	op_t ops[] = {}
		{"+", op_add},
		{"-", op_sub},
		{"*", op_null},
		{"/", op_div},
		{"%", op _mod},
		{NULL, NULL}
};
int i;https://github.com/luiscolon0426 
