#include <unistd.h>

/**
 * main- entry point and prints the required output for the progam
 *
 * Return: the value of 1 always
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
