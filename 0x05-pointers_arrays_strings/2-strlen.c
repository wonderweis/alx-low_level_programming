#include "main.h"

/**
 * _strlen- return the length of a string
 * @s: string
 *
 * Return: value
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}
