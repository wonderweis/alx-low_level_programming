#include "main.h"

/**
 * _isupper - checks uppercase characters
 * @c: parameter
 *
 * Return: value of 0
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
