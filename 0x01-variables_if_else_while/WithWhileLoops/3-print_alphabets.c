#include <stdio.h>

/**
 * main- The programs print the alphabet in lower and upper case
 * Return: Succes
 */

int main(void)
{
	int lwrletter = 'a';
	int uprletter = 'A';

	while (lwrletter <= 'z')
	{
		putchar(lwrletter);
		lwrletter++;
	}
	while (uprletter <= 'Z')
	{
		putchar(uprletter);
		uprletter++;
	}
	putchar('\n');
	return (0);
}
