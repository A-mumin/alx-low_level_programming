#include "main.h"
/**
 * print_alphabet_x10 - To print 10times the alphabet, in lowercase
 *
 * Return: Always zero
 */
void print_alphabet_x10(void)
{
	char lc;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
		{
			_putchar(lc);

		}

	_putchar('\n');

	}
}
