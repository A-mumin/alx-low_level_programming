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

	for (n = '0'; n <= '9'; n++)
	{
		_putchar (n);
		for (n = '0'; n <= '9'; n++)
		{
			_putchar (n);
			for (n = '0'; n <= '9'; n++)
			{
				_putchar (n);
				_putchar ('\n');
			}
		}
	}
}
