#include "main.h"

/**
 * _strcat - Write a function that concatenates two strings.
 * @dest: strin 1
 * @src: string 2
 * Return: 0 success
 */

char *_strcat(char *dest, char *src)

{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
	i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
	dest[i] = src[j];
	j++;
	i++;
	}
	dest[i] = '\0';
	return (dest);
}
