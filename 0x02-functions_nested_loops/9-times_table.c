#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * times_table - Write a function that prints the 9 times table.
 * Return: void
 */

void times_table(void)
{
	int i, j, a, u, y;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	a = i * j;
		if (a > 9)
		{u = a % 10;
		y = (a - u) / 10;
		_putchar(44);
		_putchar(32);
		_putchar(y + '0');
		_putchar(u + '0');
		}
		else
		{
			if (j != 0)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
	_putchar(a + '0');
		}
	}
		_putchar('\n');
	}
	}
