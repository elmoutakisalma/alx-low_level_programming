#include  <stdio.h>
/**
 * main - Write a program that prints all possible combinations
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	if (n != 57)
	{	putchar(44);
		putchar(32);
	}
	}
	putchar('\n');
	return (0);
}
