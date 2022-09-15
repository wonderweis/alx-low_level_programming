#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98.
 * @n: the natural number to start counting from n to 98
 *
 * Return: value of 0
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}
