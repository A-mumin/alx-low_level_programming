#include "main.h"

/**
 * puts_half - fuction that prints half of a string
 * @str: string variable
 * Return: zero success 
 */

void puts_half(char *str)
{
	int i = 0;
	int ln;
	
	while (str[i] != '\0')
	{
		i++;
	}
	ln = (i + 1) / 2;

	for (i = ln; str[i]; i++)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
}
