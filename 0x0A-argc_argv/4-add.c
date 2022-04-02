#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument array
 * @Return: always zero
 */

int main(int argc, char* argv[])
{
	int i, sum;

	i = 0;
	sum = 0;

	if (*argv[i] >= 'A' && *argv[i] <= 'Z')
	{
		printf ("Error\n");
	}
	else if (*argv[i] >= 'a' && *argv[i] <= 'z')
	{
		printf ("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
		printf ("%d\n", sum);
	}	
	return (0);
}
