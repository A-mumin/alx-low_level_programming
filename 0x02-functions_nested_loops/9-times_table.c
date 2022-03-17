#include "main.h"
#include <stdio.h>
/**
 * times_table - The 9 times table
 *
 * Return: zero
 */
void times_table(void)
{
	int x, n, m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			x = n * m;

			if (x == 0)
			{
				_putchar (x + '0');
				_putchar (',');
			}
			else if (x <= 9)
			{
				_putchar (' ');
				_putchar (' ');
				_putchar (x + '0');
				_putchar (',');
			}
			else if (x >= 10)
			{
				_putchar (x + '0');
				_putchar (',');
				_putchar (' ');
			}
		}
		_putchar ('\n');
	}
}
