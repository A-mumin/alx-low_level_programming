#include "main.h"
#include <stdio.h>
/**
 * print_sign - prints the sign of a number
 * @n: number variable
 * Return: 1 when +, -1 when - and zero when zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		printf ("+");
	}
	if (n < 0)
	{
		return (-1);
		printf ("-");
	}
	if (n == 0)
	{	
		return (0);
		printf (n);
	}
}
