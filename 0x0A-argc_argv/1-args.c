#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument array
 * @Return: returns zero
 */

int main(int argc, char* argv[])
{
	if (argc > 100)
	{
		printf ("%s\n", argv[10]);
	}
	else
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
