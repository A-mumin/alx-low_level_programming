#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: string character
 * @Return: always zero
 */

void _puts_recursion(char *s)
{
	if (s == '\0')
	{
		return (0);
	}
	_putchar (s);
}
