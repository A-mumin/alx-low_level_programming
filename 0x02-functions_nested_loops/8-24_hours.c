#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - Prints every minute of he day
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int n;

	_putchar (0);

	for (n = 48; n <= 57; n++)
	{
		_putchar (n);
		break;
		for (n = 50; n <= 90; n++)
		{
			_putchar (n);
			for (n = 78; n <= 97; n++)
			{
				_putchar (n);
				_putchar ('\n');
			}
		}
	}
}
