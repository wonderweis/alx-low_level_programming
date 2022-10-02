#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: first argument
 * @argv: second argument
 *
 * Return: value 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
