#include "main.h"

/**
 * _strcpy - function that cpies the sring pointed by src, inlcuding zero,
 * to the buffer pointed by dest
 * @dest: A buffer pointer
 * @src: pointer to a string
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
