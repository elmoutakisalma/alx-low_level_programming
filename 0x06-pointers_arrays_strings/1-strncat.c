#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: input
 * @src: input
 * @n: input
 * Return: to char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = 0;

	while  (dest[len] != '\0')
	{
	len++;
	}
	i = 0;
	while (src[i] != '\0' && i < n)
	{
	dest[len] = src[i];
	len++;
	i++;
	}
	dest[len] = '\0';
	return (dest);
}
