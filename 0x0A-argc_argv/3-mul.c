#include <stdio.h>
#include <stdlib.h>

/**
 * mul - entry point
 * @argc: arguiment count
 * @argv: argument array
 * @Return: always zero
 */

int mul(int x, int y)
{
	int R;
	
	R = x * y;
	printf("%d\n", R);
	return (1);
}

int main()
{
	mul(2, 3);
}
