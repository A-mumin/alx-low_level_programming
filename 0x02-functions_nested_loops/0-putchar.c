#include "main.h"
/**
 * main - Entry  point
 *
 * Return: Always zero (success)
 */
int main(void)
{
	char p[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(p[c]);
	}
	_putchar('\n');

	return (0);
}
