#include "main.h"

/**
 * main- mult two numbers
 * @argc: counter
 * @argv: numbes
 * Return: success
 */

int main(int argc, char *argv[])
{
	int Num1;
	int Num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else

	Num1 = atoi(argv[1]);
	Num2 = atoi(argv[2]);
	result = (Num1 * Num2);

	printf("%i\n", result);

	return (0);
}
