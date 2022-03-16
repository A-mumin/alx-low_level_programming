#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Code to print the last digit of integer
 *@n: any integer value
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int ln = n % 10;
	if (n < 0)
	ln = ln * -1;
	_putchar (ln + '0');

	return (n % 10);

}
