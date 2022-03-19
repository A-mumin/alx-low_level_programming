#include "main.h"

/**
 * _isupper - function to cheack for uppercase character
 *@c: character
 *Return: 1 if c is uop otherise zero (0)
 */

int _isupper(int c)
{
	char c;

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
