#include "main.h"

/**
 * _isdigit - function to check if character is digit
 * @c: any character
 * Return: 1 if its digi otherwise zero
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
