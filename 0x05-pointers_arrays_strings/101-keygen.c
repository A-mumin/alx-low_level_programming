#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * crackme - function that generate random valid passwords
 *
 * Return: an integer
 */

int crackme(void)
{
	int num;

	srand(time(0));
	num = rand();
	printf("%i\n", num);

	return (0);
}
