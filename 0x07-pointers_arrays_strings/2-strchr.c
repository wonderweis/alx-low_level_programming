#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character to search
 * Return: initialise the pointer
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);
}
