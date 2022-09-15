#include <stdio.h>

/**
 * main- program that finds and prints the sum of the even-valued terms
 *
 * Return: value of 0
 */

int main(void)
{
	unsigned long int j, k, l, m;
	int i;

	j = 1;
	k = 2;
	m = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			m = m + j;
		}
		l = j + k;
		j = k;
		k = l;
	}

	printf("%lu\n", m);
	return (0);
}
