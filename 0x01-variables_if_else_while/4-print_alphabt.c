#include <stdio.h>
/**
 * main - Print all the letters except q and e
 * Return: 0 (success)
 */

int main(void)

{
	int n;

	for (n = 97; n <= 122; n++)
	{
		if (n != 101 && n != 113)
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
