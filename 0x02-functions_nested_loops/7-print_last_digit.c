#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Code to print the last digit of integer
 *@n: any integer value
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
	_putchar (n % 10 + '0');
	}
	return (n % 10);

}
