#include "main.h"

/**
 * _isalpha- function that checks for alphabetic character
 * @c: The int to print
 *
 * Return: value of 0
 */

int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
