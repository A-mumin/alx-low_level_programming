#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: the string to be checked
 * @needle: the string to find
 * @Return: pointer to the beginning of the located substring or null
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while ((needle[j]) && (haystack[i] == needle[0]))
		{
			if  (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
				{
				i++;
				j=0;
				}
		else
			return (haystack + i);
	}
	return (0);
}
