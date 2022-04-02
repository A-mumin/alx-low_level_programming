#include <stdio.h>
#include <stdlib.h>

/**
 * mul - entry point
 * @argc: arguiment count
 * @argv: argument array
 * @Return: always zero
 */

int main(int argc, char* argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int Ans;

	if (argc == 3)
	{
	Ans = a * b;
	printf ("%d", Ans);
	}
	else
	{
		printf ("Error");
	}

	return (1);
}
