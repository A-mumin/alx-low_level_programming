#include "main.h"
/**
 * _pow_recursion - function that returns the value of x raised to the power of y
 * @x: number to evaluated
 * @y: value to be raised
 * @Return: value of the power
 */

int _pow_recursion (int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		y++;
		return (x * _pow_recursion(x, y));
	}
	y--;
	return (x * _pow_recursion(x, y));
}