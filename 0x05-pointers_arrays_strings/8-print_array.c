#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints the numbers of array
 * @a: array of integers
 * @n: numbers of elements of arrays to be printed
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
