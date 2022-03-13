#include <stdio.h>
/**
 * main - entry point 
 *
 * Return: Always zero (successful)
 */
int main(void)
{
	char A;

	for (A = 122; A >= 97; A--)
	{
		putchar(A);
	}
	putchar('\n');

	return (0);
}
