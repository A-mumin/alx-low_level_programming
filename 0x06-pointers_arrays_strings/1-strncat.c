#include "main.h"

/**
 * _strncat - append a string to another string but dont null-terminte if n bytes
 * @dest: destination string
 * @src: source string
 * @n: number of btyes
 * Return: destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
