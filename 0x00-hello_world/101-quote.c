#include <unistd.h>

/**
 * main- System that prints a stirng
 * Return: 1 = off
 */

int main(void)
{
	write(2, "and that piece of art is useful\"- Dora Korpar, 2015-10-19 \n", 59);
	return (1);
}
