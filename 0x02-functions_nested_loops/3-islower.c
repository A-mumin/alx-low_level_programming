#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * Return: 1 if c is lowercase otherwise zero
 */
int _islower(int lc)
{
	if (lc >= 'a' && lc <= 'z')
		{
			return (1);
		}
	else
			return(0);
}
