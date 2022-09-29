#include "main.h"

/**
 * evaluate_num - prime number boolean loop
 * @num: integer
 * @iterator: number to iterate
 * Return: boolean
 */

int evaluate_num(int num, int iterator)
{
	if (iterator == num - 1)
	{
		return (1);
	}

	else if (num % iterator == 0)
	{
		return (0);
	}

	if (num % iterator != 0)
	{
		return (evaluate_num(num, iterator + 1));
	}

	return (0);
}

/**
 * is_prime_number - determine if prime or not
 * @num: number
 * Return: prime boolean
 */

int is_prime_number(int num)
{
	int iterator = 2;

	if (num < 2)
	{
		return (0);
	}

	if (num == 2)
	{
		return (1);
	}

	return (evaluate_num(num, iterator));
}
