#include "main.h"

/**
 * _strlen- return the length of a string
 * @str: string
 *
 * Return: value
 */

int _strlen(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}

	return (count);
}
