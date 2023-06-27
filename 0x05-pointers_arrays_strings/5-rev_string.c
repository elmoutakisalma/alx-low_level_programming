#include "main.h"

/**
 * rev_string - Write a function that reverses a string.
 * @s: string
 * Return: 0 (success)
 */

void rev_string(char *s)
{
	int rev = s[0];
	int len = 0;
	int i;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		len--;
		rev = s[i];
		s[i] = s[len];
		s[len]	= rev;
	}
}
