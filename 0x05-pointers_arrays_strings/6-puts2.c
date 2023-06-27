#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * @str: string
 * Return: 0 success
 */

void puts2(char *str)
{
	char *y = str;
	int len = 0;
	int i;

	while (*y != '\0')
	{
		y++;
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
