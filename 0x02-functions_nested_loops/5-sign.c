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
		return (+1);
		_putchar(11);
	}
	if (n < 0)
	{
		return (-1);
		_putchar(-1);
	}
	else
	{
		return (0);
		_putchar(0);
	}
}
