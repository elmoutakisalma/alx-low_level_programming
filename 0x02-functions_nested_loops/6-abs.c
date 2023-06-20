#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _abs - Write a function that computes the absolute value of an integer.
 * @c: integer
 * Return: absolute value
 */

int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	return (-c);
}
