#include "main.h"

/**
 * main- prints the alphabet, in lowercase
 *
 * Return: value 0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
