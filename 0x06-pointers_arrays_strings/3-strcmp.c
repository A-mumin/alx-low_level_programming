#include "main.h"

/**
 * _strcmp - function that compare two string similar to strcmp
 * @s1: first string
 * @s2: second string
 * Return: s2
 */

int _strcmp(char *s1, char *s2)
{
	char *str_1 = s1;
	char *str_2 = s2;

	while (*str_1 != '\0' && *str_2 != '\0' && str_1 == str_2)
	{
		str_1++;
		str_2++;
	}

	return (*str_1 - *str_2);
}
