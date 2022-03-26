#include "main.h"

/**
 * int_isupper - functuon that checks for upper case character
 * @c: character variable
 * @Return: 1 if its uppercase while zero when otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
