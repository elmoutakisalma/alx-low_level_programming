#include "main.h"

/**
 * _memcpy - Write a function that copies memory area.
 * @dest: is char
 * @src: is char
 * @n: n bytes from memory area src
 * Return: to char
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];

	}


	return (dest);
}
