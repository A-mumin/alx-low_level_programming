#include "main.h"

/**
 * _strcat - function that appends string to anothe string 
 * @dest: destination string
 * @src: intial string
 * Return: resulting string 
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] =src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
