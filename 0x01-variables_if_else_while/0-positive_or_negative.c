#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main- entry point to print a random number and stored
 *
 * Return: give the value of 0 always
 */
int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes there */
				if (n > 0)
					printf("%d is positive\n", n);
				if (n == 0)
					printf("%d is zero\n", n);
				if (n < 0)
				{
					printf("%d is negative\n", n);
				}
					return (0);

}
