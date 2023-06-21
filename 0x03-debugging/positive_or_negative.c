#include "main.h"

/**
 * positive_or_negative - This program will assign a number n
 * @n: intefer variable
 * Return: 0 (success)
 */

void positive_or_negative(int n)
{

	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
}
