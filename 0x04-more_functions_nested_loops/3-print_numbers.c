#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 *
 * @Return: zero always
 */

void print_numbers(void)
{
	int c;

	c = 0;
	while (c < 10)
	{
		_putchar (c + '0');
		c++;
	}
	_putchar ('\n');
}
