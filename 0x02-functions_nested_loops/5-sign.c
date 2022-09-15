#include "main.h"

/**
 * print_sign - return 0 letter not lowercase, 1 letter lowercase
 * @n : number to check
 *
 * Return: 1 or 0
 */

int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		test = 1;
		_putchar('+');
	}

	else if (n == 0)
	{
		test = 0;
		_putchar('0');
	}

	else
	{
		test = -1;
		_putchar('-');
	}

	return (test);
}
