#include <stdio.h>
/**
 * main - Write a program that prints the alphabet in lowercas
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	for (n = 97; n <= 122 ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
