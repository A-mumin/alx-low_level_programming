#include <stdio.h>
#include "main.h"
/**
 * _abs - main function 
 *
 * Return: zero
 */
int _abs(int)
{
	int n;
	if (n < 0)
	{
		printf("-[%d]", n);
	}
	else
	{
		printf("%d", n);
	}
}
