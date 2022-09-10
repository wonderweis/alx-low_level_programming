#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- entry point to declare variable and code
 *
 * Return: the value of 0 always
 */

int main(void)
{
	int ch;

	clrscr();

	/* putchar("\nLowercase characters : \n"); */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar ("%c ", ch);
		putchar ("\n");
	}
	return (0);
}
