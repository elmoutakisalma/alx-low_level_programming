#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _isalpha - Write a function that checks for alphabetic character.
 * @c: 1 if c is a letter, lowercase or uppercas 0 otherwise
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	return (0);
}
