#include "main.h"

/**
 * main- prints the alphabet, in lowercase using print_alphabet
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
