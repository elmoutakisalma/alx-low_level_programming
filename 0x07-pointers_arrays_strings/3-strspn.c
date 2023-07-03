#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: char
 * @accept: char
 * Return: to unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
		unsigned int i, n, value, verif;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		verif = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				value++;
				verif = 1;
			}
		}

		if (verif == 0)
			return (value);
	}

	return (value);

}

