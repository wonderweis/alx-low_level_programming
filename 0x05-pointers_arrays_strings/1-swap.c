#include "main.h"

/**
 * swap_int- swaps the values of two integers
 * @a: integer
 * @b: another integer
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
