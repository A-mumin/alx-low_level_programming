#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: any character
 * Return: 1 if uppercase and 0 otherwise
 */

int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
