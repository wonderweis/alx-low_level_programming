#include <stdio.h>

/**
 * main- program to print all letters except q and e
 *
 * Return: the value of 0 always
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}

	putchar('\n');
	return (0);
}
