#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: any character
 * Return: 1 if uppercase and 0 otherwise
 */

int _isupper(int c)
{
	char C;

	if (C >= 65 && C <= 90)
	{
		return (1);
	}
	else
		return (0);
}
