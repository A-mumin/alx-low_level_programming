#include "main.h"

/**
 * _memset - function that fills memorty with a constant byte
 * @s: pointer to first bytes of memmory area
 * @b: constant byte
 * @n: bytes of memory
 * @Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
