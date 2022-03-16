#include <stdio.h>
#include "main.h"
/**
 * _abs - main function 
 *@n: numbers
 * Return: zero
 */
int _abs(int n)
{
	if (n < 0)
	{
		printf("(%d)*(-1)", n);
	}
	else
	{
		printf("%d", n);
	}
	return (0);
}
