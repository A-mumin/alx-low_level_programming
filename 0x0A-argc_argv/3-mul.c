#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: arguiment count
 * @argv: argument array
 * @Return: always zero
 */

int main(int argc, char* argv[])
{
	int Ans;

	if (argc == 3)
	{
	Ans = atoi(argv[1]) * atoi(argv[2]);
	printf ("%d\n", Ans);
	}
	else
	{
		printf ("Error\n");
	}

	return (1);
}
