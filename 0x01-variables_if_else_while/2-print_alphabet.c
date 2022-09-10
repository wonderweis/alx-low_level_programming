#include <stdio.h>

/**
 * main- entry point to declare variable and code
 *
 * Return: the value of 0 always
 */

int main(void)
{
	char ch;

	/* putchar("\nLowercase characters : \n"); */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar("%c ", ch);
	}
	return (0);
}
