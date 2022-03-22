#include "main.h"

/**
 * _puts - function that prints a string 
 * @str: character variable
 * Return: Always zero
 */

void _puts(char *str)
{
	char *c;
	int i;

	c = str;
	for (i = 0; c[i]; i++)
	{
		_putchar (c[i]);
	}
	_putchar ('\n');
}
