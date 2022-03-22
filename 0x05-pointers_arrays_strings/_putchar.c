#include <unistd.h>

/**
 * _putchar - writes the charcter of c to stdout
 * @c: variable character
 * Return: Zero when sucess and -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
