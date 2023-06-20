#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_alphabet - function that prints the alphabet, in lowercase
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
	_putchar(n);
	}
	_putchar('\n');
}
