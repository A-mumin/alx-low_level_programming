#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: string character
 * @Return: always zero
 */

void _puts_recursion(char *s)
{
	int y = *s;

	if (y == '\0')
	{
		_putchar ('\n');
	}
	_putchar (y);
	_puts_recursion(char *y);
}
