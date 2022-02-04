#include <unistd.h>

/**
 * main- System that prints a stirng
 * Return: 1 = off
 */

int main(void)
{
	write(2, "and that piece of art is useful\"", 32);
	write(2, "- Dora Korpar, 2015-10-19 \n", 27);
	return (1);
}
