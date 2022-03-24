#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @a: integer variable
 * @n: number of elements of the array to be printed
 * Return: zero successful
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			prinf(", ");
		}
		i++
	}
	printf('\n');
}
