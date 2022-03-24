#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by new line
 * @str: string variable 
 * Return: zero on success
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar (str[a]);
		}
	}
	_putchar ('\n');
}
