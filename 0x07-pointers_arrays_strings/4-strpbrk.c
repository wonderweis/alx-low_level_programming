#include "main.h"

/**
 * _strpbrk - searches a string for any byte set
 * @s: scanned string
 * @accept: bytes in the string
 * Return: pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}

			j++;
		}

		s++;
	}

	return (0);
}
