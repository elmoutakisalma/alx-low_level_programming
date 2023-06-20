#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @c: last digit integer
 * Return: Value of the last digit
 */

int print_last_digit(int c)
{
	int a;

	a = c % 10;
	if (a < 0)
	{
		a = a * -1;
	}
	_putchar(a + '0');
	return (a);
}
