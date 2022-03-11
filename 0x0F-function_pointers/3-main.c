#include "3-calc.h"

/**
 * main- call functions of operators
 * @argc: argument counts
 * @argv: argument value
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int number1, number2;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	calc = (get_op_func(argv[2]));
	if (calc == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	number1 = atoi(argv[1]);
	number2 = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && (number2 == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", calc(number1, number2));
	return (0);
}
