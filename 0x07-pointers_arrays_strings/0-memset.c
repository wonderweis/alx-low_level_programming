#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memmory area
 * @b: constant byte
 * @n: bytes of memory
 * Return: s value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b; /*Adding a position to the pointer*/
	}

	return (s);
}
