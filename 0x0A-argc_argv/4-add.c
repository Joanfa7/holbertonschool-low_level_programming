#include "main.h"

/**
 * main- add numbes
 * @argc: counter
 * @argv: elements
 * Return: success
 */

int main(int argc, char *argv[])
{
	int i;
	int NumChecker;
	int Sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (NumChecker = 0; argv[i][NumChecker] != '\0'; NumChecker++)
		{
			if (argv[i][NumChecker] < '0' || argv[i][NumChecker] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		Sum += atoi(argv[i]);
	}
	printf("%d\n", Sum);

	return (0);
}
