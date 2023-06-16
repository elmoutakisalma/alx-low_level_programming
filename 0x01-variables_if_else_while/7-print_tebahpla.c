#include <stdio.h>
/**
 * main - t prints the lowercase alphabet in reverse,
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 122; n >= 97; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
