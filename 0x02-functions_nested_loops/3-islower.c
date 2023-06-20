#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _islower - Write a function that checks for lowercase character.
 * @c: if c is lowercase 0 otherwise
 * Return: c
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
	return (1);
	}
	else
	return (0);
}
