#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument variable
 * @Return: zero always
 */

int main(int argc, char* argv[])
{
	int coin;
	int c25, c10, c5, c2;
	int N25, N10, N5, N2, N1;

	if (argc == 2)
	{
		c25 = atoi(argv[1]) % 25;
		N25 = atoi(argv[1]) / 25;
		c10 = c25 % 10;
		N10 = c25 / 10;
		c5 = c10 % 5;
		N5 = c10 / 5;
		c2 = c5 % 2;
		N2 = c5 / 2;
		N1 = c2 / 1;
		coin = N25 + N10 + N5 + N2 +N1;

		printf ("%d\n", coin);
	}
	else
	{
		printf ("Error\n");
	}
	return (1);
}
