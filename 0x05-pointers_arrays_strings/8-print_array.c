#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * @n: number of elements of the array to be printed
 * @a: array
 * Return: 0 success
 */

void print_array(int *a, int n)

{
	int i;

	for (i = 1; i < n; i++)
	{

	printf("%d, ", a[i - 1]);
	}
	if (i == n)
	{
	printf("%d", a[n - 1]);
	}
	printf("\n");
}
