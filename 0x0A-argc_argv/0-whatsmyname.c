#include "main.h"

/**
 * main- progarm tha prints its name.
 * @argc: argument counter
 * @argv: name of the program
 * Return: success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
