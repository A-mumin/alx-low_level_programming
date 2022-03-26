#include "main.h"

/**
 * _isupper - functuon that checks for upper case character
 * @c: character variable
 * @Return: 1 if its uppercase while zero when otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
