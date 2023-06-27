#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: string
 * Return: 0 success
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
	len++;
	s++;
	}
	s--;
	for (i = len; i > 0; i--)
	{
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}
