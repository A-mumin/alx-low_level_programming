#include "main.h"

/**
 * swap_int - function that swap the values of two integers
 * @a: integer variable 1 to be swapped with 2
 * @b: integer variable 2 to be swapped with 1
 * Return: always zero
 */

void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
