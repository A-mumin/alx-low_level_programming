#include "main.h"

/**
 * _strpbrk - function that searcher a string for any of a set of bytes
 * @s: string of any byte
 * @accept: string to test
 * @Return: a pointer to the bytes in s that matches one in accept
 */

char *strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
		{
			return (s + i);
		}
	}
	return (0);
}
