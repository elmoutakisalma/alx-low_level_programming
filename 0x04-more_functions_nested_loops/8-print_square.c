#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * Return: 0 success
 */

void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
	for (j =  0; j < size; j++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}

}
