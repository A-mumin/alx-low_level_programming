#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always zero (sucess)
 */
int main(void)
{
	char B;

	for (B = 48; B <= 57; B++)
	{
		putchar (B);
	}
	for (B = 97; B <= 102; B++)
	{
		putchar (B);
	}

	putchar ('\n');

	return (0);
}
