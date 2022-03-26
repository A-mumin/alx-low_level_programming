#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 *
 * @Return: zero always
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar ("%d", c);
		_putchar ('\n');
	}
}
