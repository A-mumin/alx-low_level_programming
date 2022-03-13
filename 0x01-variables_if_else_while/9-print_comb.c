#include <stdio.h>
/** 
 * main - Entry point
 *
 * Return: always zero (sucess)
 */
int main(void)
{
	int d;

	for (d = 48; d <= 57; d++)
	{
		if (d == 57)
		{
break:
		}

		putchar (',');
		putchar (' ');
	}
	putchar('\n');

	return (0);
}
