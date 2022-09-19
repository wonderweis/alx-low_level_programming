#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array of integers
 * @a: int a
 * @n: int n
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}

	printf("\n");
}
