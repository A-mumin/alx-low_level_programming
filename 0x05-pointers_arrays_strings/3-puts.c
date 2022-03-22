#include "main.h"

/**
 * _puts - function that prints a string 
 * @str: character variable
 * Return: Always zero
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
}
