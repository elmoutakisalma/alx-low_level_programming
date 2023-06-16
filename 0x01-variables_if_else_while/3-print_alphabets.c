#include <stdio.h>
/**
 * main - Write a program that prints the alphabet
 * Return: 0 (success)
 */

int main(void)
{
	int n;
	int a;

	for (n = 97; n <= 122; n++)
	{
		putchar(n);
	}
	for (a = 65; a <= 90; a++)
	{
	putchar(a);
	}
	putchar('\n');
	return (0);
}
